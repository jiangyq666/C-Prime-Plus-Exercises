#include <iostream>
#include <cstring>

int main(){
    char ch[20];
    int b = -1;
    while(strcmp(ch, "done")!=0){
        std::cin >> ch;
        b++;
    };
    std::cout << b;    
    return 0;
}