#include <iostream>
using namespace std;
double  Celsiuscount(int);

int main(){
    cout << "Please enter a Celsius value: ";
    int c;
    cin >> c;
    double d = Celsiuscount(c);
    cout << c << " degrees Celsius is " << d << " degrees Fahrenheit." << endl;
    return 0;
}

double Celsiuscount(int a){
    double b = 1.8 * a + 32.0;
    return b;
}