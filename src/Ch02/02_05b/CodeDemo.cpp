// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool flag;
    a = 7;
    flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << flag << std::endl;

    flag = true;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "flag = " << flag << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
