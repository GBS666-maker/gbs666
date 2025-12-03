#include <stdio.h>

int main()
{
    int n, factorial = 1; // factorial初始化为1（乘法单位元）
    printf("Please enter n:");
    scanf("%d", &n);
    
    // 循环计算n!，n=0或1时结果为1
    for (int i = 1; i <= n; i++)
        factorial *= i;
    
    printf("%d! = %d\n", n, factorial);
    return 0;
}