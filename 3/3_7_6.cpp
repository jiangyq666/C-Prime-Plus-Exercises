#include <iostream>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using i32 = int;
using u32 = unsigned int;

int main(){
    system("chcp 65001 > nul");
    cout << "驱车里程（英里）：";
    u32 a;
    cin >> a;
    cout << "汽油量（加仑）：";
    u32 b;
    cin >> b;
    double c = static_cast<double>(a) / static_cast<double>(b);
    cout << "美式耗油量：" << c << "mpg" << endl;

    cout << "驱车里程（公里）：";
    u32 d;
    cin >> d;
    cout << "汽油量（升）：";
    u32 e;
    cin >> e;
    double f = static_cast<double>(e) * 100 / static_cast<double>(d);
    cout << "欧式耗油量：" << f << "L/km" << endl;

    return 0;
}