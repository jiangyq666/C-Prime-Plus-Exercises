#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::vector<int>> Mon(36, std::vector<int>(3, 0));
    for(int i = 0; i < 12; i++){
        Mon[i][0] = 1;
        Mon[i][1] = i + 1;
    };
    for(int i = 12; i < 24; i++){
        Mon[i][0] = 2;
        Mon[i][1] = i - 11;
    };
    for(int i = 24; i < 36; i++){
        Mon[i][0] = 3;
        Mon[i][1] = i - 23;
    };
    for(int i = 0; i < 36; i++){
        std::cout << Mon[i][0] << " " << Mon[i][1] << ": ";
        std::cin >> Mon[i][2];
    };
    int a = 0;
    for(int i = 0; i < 12; i++){
        a = a + Mon[i][2];
    }
    std::cout << a << std::endl;
    int b = 0;
    for(int i = 12; i < 24; i++){
        b = b + Mon[i][2];
    }
    std::cout << b << std::endl;
    int c = 0;
    for(int i = 24; i < 36; i++){
        c = c + Mon[i][2];
    }
    std::cout << c << std::endl;
    int d = a + b + c;
    std::cout << d <<std::endl;
    return 0;
}