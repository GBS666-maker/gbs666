#include <stdio.h>

int main()
{
    int a, b, temp, gcd, lcm;
    printf("请输入两个正整数: ");
    scanf("%d %d", &a, &b);
    
    int a_orig = a, b_orig = b; // 保存原始值用于计算最小公倍数
    
    // 辗转相除法求最大公约数（优化：减少多余赋值）
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;
    
    // 最小公倍数公式：(a*b)/最大公约数（避免重复计算）
    lcm = (a_orig * b_orig) / gcd;
    
    printf("最大公约数: %d\n", gcd);
    printf("最小公倍数: %d\n", lcm);
    return 0;
}