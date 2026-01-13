#include <iostream>
#include <string>
#include <limits>

struct Car{
    std::string Name;
    int Year;
};

int main(){
    int a;
    std::cout << "How many cars do you want to catalog?";
    std::cin >> a;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    Car* Vec = new Car[a];
    for(int i = 0; i < a; i++){
        int b = i + 1;
        std::cout << "Car #" << b << ":" << std::endl;
        std::cout << "Please enter the maker:";
        std::getline(std::cin, Vec[i].Name);
        std::cout << "Please enter the year made:";
        std::cin >> Vec[i].Year;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };
    std::cout << "Here is your collection:" << std::endl;
    std::cout << Vec[0].Year << " " << Vec[0].Name << std::endl;
    std::cout << Vec[1].Year << " " << Vec[1].Name << std::endl;
    return 0;
}