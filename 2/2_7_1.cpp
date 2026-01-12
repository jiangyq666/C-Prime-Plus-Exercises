#include <iostream>
#include <windows.h>  // Windows系统

int main() {
    // 设置控制台为UTF-8编码
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    std::cout << "罗思贤" << std::endl;
    std::cout << "湖北武汉" << std::endl;
    return 0;
}