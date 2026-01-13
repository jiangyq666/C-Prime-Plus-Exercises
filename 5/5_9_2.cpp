#include <iostream>
#include <array>

int main(){
    const int Arsize = 100;
    std::array<long double, Arsize> arr1;
    arr1[1] = arr1[0] = 1;
    for(int i = 2; i < Arsize; i++){
        arr1[i] = i * arr1[i-1];
    };
    for(int i = 0; i < Arsize; i++){
        std::cout << i << "! = " << arr1[i] << std::endl;
    }

    return 0;
}