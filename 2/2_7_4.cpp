#include <iostream>
using namespace std;
int Agecount(int);

int main(){
    int a;
    cin >> a;
    cout << "Enter your age: " << a << endl;
    int b = Agecount(a);
    cout << "Your age in mouths is " << b << endl;
    return 0;
}

int Agecount(int n){
    int a = n * 12;
    return a;
}