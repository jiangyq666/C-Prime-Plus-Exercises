#include <iostream>
using namespace std;
void Time(int, int);

int main(){
    cout << "Enter the number of hours: ";
    int i;
    cin >> i;
    cout << "Enter the number of minutes: ";
    int x;
    cin >> x;
    Time(i, x);
    return 0;
}

void Time(int a, int b){
    cout << "Time: " << a << ":" << b << endl;
}