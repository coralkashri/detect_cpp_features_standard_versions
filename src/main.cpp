#define LLVM_DISABLE_ABI_BREAKING_CHECKS_ENFORCING 1

#include <clang/Tooling/Tooling.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Frontend/CompilerInstance.h>

#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
