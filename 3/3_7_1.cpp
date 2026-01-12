#include <iostream>
using namespace std;
void Count(int);

int main(){
    system("chcp 65001 > nul");
    cout << "__\b\b";
    int i;
    cin >> i;
    Count(i);
    return 0;
}

void Count(int a){
    const int n = 12;
    int b = a / n;
    int c = a % n;
    cout << b << "英尺" << c << "英寸" << endl;
}