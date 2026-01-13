#include <iostream>

int main(){
    double Daphne, Cleo;
    int year = 0;
    Cleo = 100;
    do{
        year++;
        Daphne = 100 * (1 + 0.1 * year);            
        Cleo = Cleo * 1.05;
    }while(Cleo <= Daphne);
    std::cout << year << std::endl;
    std::cout << Daphne << std::endl;
    std::cout << Cleo << std::endl;
    return 0;
}