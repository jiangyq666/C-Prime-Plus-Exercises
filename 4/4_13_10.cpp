#include <iostream>
#include <array>

int main(){
    std::array<double, 3> a1;
    std::cin >> a1[0];
    std::cin >> a1[1];
    std::cin >> a1[2];
    double a = (a1[0] + a1[1] + a1[2]) / 3;
    std::cout << 3 << " " << a << std::endl;
    return 0;
}