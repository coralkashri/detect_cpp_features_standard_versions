#include <clang/Tooling/Tooling.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Frontend/CompilerInstance.h>

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::vector<std::string> strs;
    strs.push_back("AAA");
    int a = 5;
    return 0;
}
