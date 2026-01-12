#include <iostream>
using namespace std;
double Aucount(double);

int main(){
    cout << "Enter the number of light years: ";
    double i;
    cin >> i;
    double x = Aucount(i);
    cout << i << " light years = " << x << " astronomical units" << endl;
    return 0;
}

double Aucount(double a){
    double b = a * 63240;
    return b;
}