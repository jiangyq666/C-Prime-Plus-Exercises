#include <iostream>
#include <string>

int main(){
    std::string str1;
    std::string str2 = "done";
    int a = -1;
    do{
        std::cin >> str1;
        a++;
    }while(str1 != str2);
    std::cout << a;
    return 0;
}