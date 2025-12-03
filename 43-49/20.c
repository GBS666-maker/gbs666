#include <stdio.h>
// 函数：返回n从右算起的第k位数字（k>=1）
int digit(int n, int k)
{
    if(n <= 0 || k <= 0) return -1; // 异常输入返回-1
    // 循环k-1次：去掉右边k-位数字
    for(int i = 1; i < k; i++)
    {
        n /= 10; // 每次除以10，去掉最低位
    }
    return n % 10; // 返回当前最低位（即第k位数字）
}
int main()
{
    int n, k;
    printf("请输入正整数n和k（空格分隔）：");
    scanf("%d%d", &n, &k);
    int result = digit(n, k); // 调用函数
    if(result == -1)
    {
        printf("输入错误（n需为正整数，k需>=1）\n");
    }
    else
    {
        printf("%d从右算起的第%d位数字是：%d\n", n, k, result);
    }
    return 0;
}