#include <iostream>

int main(){
    int a;
    int sum = 0;
    do{
        std::cin >> a;
        sum = sum + a;
    }while(a != 0);
    std::cout << sum << std::endl;
    return 0;
}