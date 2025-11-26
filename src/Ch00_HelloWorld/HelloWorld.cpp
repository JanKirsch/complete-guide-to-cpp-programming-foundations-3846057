/* Hello World example with usage of simple functions.

*/
#include <iostream>
#include <cstdio>

int printHelloWorld(){
    printf("Hi there, this is a \"Hello World\" of C++!\n");
    return 0;
}

int printEndOfProgramPrint(){
    std::cout << std::endl << std::endl;
    std::cout << "______________________________________" << std::endl;
    return 0;
}

int main(){
    printHelloWorld();
    printEndOfProgramPrint();
    return 0;
}

