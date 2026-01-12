#include <iostream>
#include <string>
#include <vector>

struct Information{
    std::string Firstname;
    std::string Lastname;    
    char Grade;
    int Age;
};

int main(){
    Information I1;
    std::cout << "What is your first name? ";
    std::getline(std::cin, I1.Firstname);
    std::cout << "What is your last name? ";
    std::cin >> I1.Lastname;    
    std::cout << "What letter grade do you deserve? ";
    std::cin >> I1.Grade;
    I1.Grade++;
    std::cout << "What is your age? ";
    std::cin >> I1.Age;
    std::cout << "Name:" << I1.Lastname << ", " << I1.Firstname << std::endl;
    std::cout << "Grade:" << I1.Grade << std::endl;
    std::cout << "Age:" << I1.Age << std::endl;
    return 0;
}