#include <iostream>

int main() {
    const int YARDS_PER_LONG = 220;  // 转换系数
    
    long distanceLong;
    std::cin >> distanceLong;
    
    // 直接计算并输出
    long distanceYards = distanceLong * YARDS_PER_LONG;
    std::cout << distanceYards << std::endl;
    
    return 0;
}