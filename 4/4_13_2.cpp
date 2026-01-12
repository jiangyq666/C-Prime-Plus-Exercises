#include <iostream>
#include <string>

int main(){
    std::cout << "Enter your name:" << std::endl;
    std::string str1;
    std::getline(std::cin, str1);
    std::cout << "Enter your favourite dessert:" << std::endl;
    std::string str2;
    std::getline(std::cin, str2);
    std::cout << "I have some delicious " << str2 << " for you, " << str2 << std::endl;        
    return 0;
}