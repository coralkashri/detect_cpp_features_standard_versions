#include <clang/Tooling/Tooling.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Frontend/CompilerInstance.h>

#include <iostream>
#include <string>
#include <vector>
#include <span>

using namespace clang::tooling;
using namespace clang::ast_matchers;

class MyASTConsumer : public clang::ASTConsumer {
public:
	void HandleTranslationUnit(clang::ASTContext &Context) override {
		// Implement your AST traversal and feature detection logic here.
	}
};

class MyFrontendAction : public clang::ASTFrontendAction {
public:
	std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(
		clang::CompilerInstance &Compiler, llvm::StringRef InFile) override {
		return std::make_unique<MyASTConsumer>();
	}
};

int main(int argc, const char** argv) {
	llvm::cl::OptionCategory category("Options");
	auto OptionsParser = CommonOptionsParser::create(argc, argv, category);
	ClangTool Tool(OptionsParser.get().getCompilations(), OptionsParser.get().getSourcePathList());

	return Tool.run(newFrontendActionFactory<MyFrontendAction>().get());
	//return EXIT_SUCCESS;
}
