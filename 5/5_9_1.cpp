#include <iostream>

int main(){
    int a, b;
    int c = 0;
    std::cin >> a >> b;
    for(int i = a; i <= b; i++){
        c = c + i;
    };
    std::cout << c << std::endl;
    return 0;
}