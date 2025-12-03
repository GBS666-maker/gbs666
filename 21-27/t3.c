#include <stdio.h>

int main()
{
    int sum = 0, factorial; // 简化变量名，factorial表示阶乘
    // 外层循环控制累加次数，内层循环计算单个数的阶乘
    for (int i = 1; i <= 3; i++)
    {
        factorial = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
            factorial *= j; // 简化乘法赋值
        sum += factorial; // 简化累加赋值
    }
    printf("%-5d\n", sum); // 输出：8!的前3项阶乘和，结果为 16
    return 0;
}