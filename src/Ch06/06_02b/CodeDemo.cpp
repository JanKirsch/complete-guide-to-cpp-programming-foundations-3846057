// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

double multiplyTwoValues(int var1, int var2);

int square(int x){
    x *= x;
    return x;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    // TODO: square
    double multi = 0;
    multi = multiplyTwoValues(a, 20);
    b = square(a);

    std::cout << "a * b = " << multi << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}

double multiplyTwoValues(int var1, int var2){
    double result = var1 * var2;
    return result;
}

