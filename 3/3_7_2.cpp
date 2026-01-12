#include <iostream>
using namespace std;
int Englishcount(int, int);
double Metercount(int);
double Weightcount(double);
double Bmicount(double, double);

int main(){
    system("chcp 65001 > nul");
    cout << "输入身高（单位英尺英寸）：" << endl;
    cout << "英尺：";
    int a;
    cin >> a;
    cout << "英寸：";
    int b;
    cin >> b;
    int c = Englishcount(a, b);
    cout << "身高（英寸）：" << c << endl;
    double d = Metercount(c);
    cout << "身高（米）：" << d << endl;
    cout << "体重（磅）：";
    double e;
    cin >> e;
    double f = Weightcount(e);
    cout << "体重（千克）：" << f << endl;
    double g = Bmicount(f, d);
    cout << "BMI:" << g << endl; 
    return 0;
}

int Englishcount(int a, int b){
    const int n = 12;
    int c = a * n + b;
    return c;
}

double Metercount(int a){
    const double n = 2.5;
    double b = a * n;
    return b;
}

double Weightcount(double a){
    const double n = 2.2;
    double b = a / n;
    return b;
}

double Bmicount(double a, double b){
    double c = a * a / b;
    return c;
}