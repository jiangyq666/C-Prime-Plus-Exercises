#include <iostream>
#include <string>

struct CandyBar{
    std::string Name;
    double Heavy;
    int Calorie;
};

int main(){
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 250},
        {"Mocha", 1.3, 250},
        {"Munch", 2.3, 150}
    };
    std::cout << snack[0].Name << std::endl;
    std::cout << snack[0].Heavy << std::endl;
    std::cout << snack[0].Calorie << std::endl;
    std::cout << snack[1].Name << std::endl;
    std::cout << snack[1].Heavy << std::endl;
    std::cout << snack[1].Calorie << std::endl;
    std::cout << snack[2].Name << std::endl;
    std::cout << snack[2].Heavy << std::endl;
    std::cout << snack[2].Calorie << std::endl;
    return 0;
}