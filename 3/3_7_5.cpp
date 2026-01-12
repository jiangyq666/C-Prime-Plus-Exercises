#include <iostream>
using namespace std;
double Count(long long, long long);

int main(){
    cout << "Enter the population of world:";
    long long a;
    cin >> a;
    cout << "Enter the population of US:";
    long long b;
    cin >> b;    
    double c = Count(b, a);
    cout << "The population of US is " << c << "%" << " of the world population" << endl;
    return 0;
}

double Count(long long a, long long b){
    double c = static_cast<double>(a) / static_cast<double>(b) * 100;
    return c;
}