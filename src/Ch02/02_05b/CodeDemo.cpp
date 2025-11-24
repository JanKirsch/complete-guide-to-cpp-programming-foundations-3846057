// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    
    int c = a + b;
    std::cout << "c = " << c << std::endl;
    int d = a + my_flag;
    std::cout << "d = " << d << std::endl;
    my_flag = !my_flag;
    int e = a + my_flag;
    std::cout << "e = " << e << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    
    std::cout << std::endl << std::endl;


    return 0;
}
