// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

/* Hello World example with usage of simple functions.

*/
#include <iostream>
#include <cstdio>
#include <string>

int printHelloWorld(){
    printf("Hi there, this is a \"Hello World\" of C++!\n");
    return 0;
}

int printEndOfProgramPrint(){
    std::cout << std::endl << std::endl;
    std::cout << "______________________________________" << std::endl;
    return 0;
}

int getNameOfUser(){
    std::string name;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Hi " << name << "!" << std::endl;
    return 0;
}

int main(){
    printHelloWorld();
    getNameOfUser();
    printEndOfProgramPrint();
    return 0;
}

