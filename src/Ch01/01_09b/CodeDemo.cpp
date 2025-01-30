// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

/*
    Multi Line Comments
*/

int main(){
    std::string name; 
    std::cout << "Hi There! Tell me your name: " << std::flush;
    std::cin >> name;
    
    std::cout << "Hi " << name << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}