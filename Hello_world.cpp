#include <iostream>
int main() { 
    std::string name;
    std::cout << "Enter name "; 
    std::cin >> name; //Запрос @name
    std::cout << "Hello world from " << name;
}