#include <iostream>
using namespace std;
double Minutescount(int);
double Secondscount(int);

int main(){
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First,enter the degrees:";
    int a;
    cin >> a;
    cout << "Next,enter the minutes of arc:";
    int b;
    cin >> b;
    cout << "Finally,enter the seconds of arc:";
    int c;
    cin >> c;
    double d = a + Minutescount(b) + Secondscount(c);
    cout << a << " degrees," << b << " minutes," << c << " seconds = " << d << " degrees" << endl;
    return 0;
}

double Minutescount(int a){
    const double n = 60.0;
    double b = n / 60;
    return b;
}

double Secondscount(int a){
    const double n = 360.0;
    double b = a / n;
    return b;
}