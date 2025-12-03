#include <stdio.h>
#include <stdbool.h> // 使用bool类型提升可读性

// 函数：判断一个数是否为素数（优化：循环到sqrt(n)，减少计算）
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    printf("请输入一个大于2的偶数: ");
    scanf("%d", &n);
    
    // 输入合法性判断
    if (n <= 2 || n % 2 != 0)
    {
        printf("请输入一个大于2的偶数!\n");
        return 1;
    }
    
    // 循环找第一个符合条件的素数对
    for (int i = 2; i <= n / 2; i++)
    {
        if (is_prime(i) && is_prime(n - i))
        {
            printf("%d = %d + %d\n", n, i, n - i);
            break;
        }
    }
    
    return 0;
}