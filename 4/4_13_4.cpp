#include <iostream>
#include <string>

int main(){
    std::string Firstname;
    std::string Lastname;
    std::cout << "Enter your First name: ";
    std::cin >> Firstname;
    std::cout << "Enter your Last name: ";
    std::cin >> Lastname;
    std::cout << "Here's the information in a single string: " << Lastname << ", " << Firstname << std::endl;
    return 0;
}