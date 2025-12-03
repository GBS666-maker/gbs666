#include <stdio.h>
#include <math.h>
// 函数：判断n是否为素数，是返回1，否返回0
int isPrime(int n)
{
    if(n <= 1) return 0; // 1及以下不是素数
    if(n == 2) return 1; // 2是素数
    if(n % 2 == 0) return 0; // 偶数不是素数
    // 循环判断：只需判断到sqrt(n)（优化效率）
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("请输入一个正整数：");
    scanf("%d", &num);
    if(isPrime(num)) // 调用函数判断
    {
        printf("%d是素数\n", num);
    }
    else
    {
        printf("%d不是素数\n", num);
    }
    return 0;
}