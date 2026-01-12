#include <iostream>
#include <string>

struct CandyBar{
    std::string Name;
    double Heavy;
    int Calorie;
};

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 250};
    std::cout << snack.Name << std::endl;
    std::cout << snack.Heavy << std::endl;
    std::cout << snack.Calorie << std::endl;
    return 0;
}