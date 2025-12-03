#include <stdio.h>

int main()
{
    double millionaire_total = 0; // 百万富翁给出的总钱数
    double stranger_total = 0;    // 陌生人给出的总钱数
    double daily_give = 0.01;     // 陌生人每天给的钱（翻倍增长）
    const int DAYS = 30;          // 用常量定义天数，便于修改
    
    // 循环30天，累加双方给出的钱
    for (int i = 1; i <= DAYS; i++)
    {
        millionaire_total += 100000;
        stranger_total += daily_give;
        daily_give *= 2;
    }
    
    // 保留2位小数输出，格式更清晰
    printf("陌生人给了百万富翁: %.2f元\n", millionaire_total);
    printf("百万富翁给了陌生人: %.2f元\n", stranger_total);
    return 0;
}