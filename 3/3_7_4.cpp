#include <iostream>
using namespace std;
void Timecount(long);

int main(){
    cout << "Enter the number of seconds:";
    long a;
    cin >> a;
    Timecount(a);
    return 0;
}

void Timecount(long a){
    const double n = 60.0;
    long b = a / (n * n * 24);
    long c = a - b * n * n * 24;
    long d = c / (n * n);
    long e = c - d * n * n;
    long f = e / n;
    long g = e - f * n;
    cout << a << " seconds = "<< b << " days " << d << " hours " << f << " minutes " << g << "seconds" << endl;
}