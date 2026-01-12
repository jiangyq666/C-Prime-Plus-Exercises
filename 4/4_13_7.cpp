#include <iostream>
#include <string>

struct Pizza{
    std::string Name;
    double Diameter;
    double Hezvy;
};

int main(){
    Pizza a;
    std::cin >> a.Name;
    std::cin >> a.Diameter;
    std::cin >> a.Hezvy;
    std::cout << a.Name << a.Diameter << a.Hezvy << std::endl;
    return 0;
}