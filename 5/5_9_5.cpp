#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> Mon = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    std::vector<int> Vol(12, 0);
    for(int i = 0; i < 12; i++){
        std::cout << Mon[i] <<": ";
        std::cin >> Vol[i];
    };
    int a = 0;
    for(int i = 0; i < 12; i++){
        a = a + Vol[i];
    };
    std::cout << a << std::endl;
    return 0;
}