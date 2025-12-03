#include <stdio.h>
// 函数：检查x、y是否落在[0, n-1]闭区间，是返回1，否返回0
int check(int x, int y, int n)
{
    // 条件：x在[0,n-1] 且 y在[0,n-1]
    if(x >= 0 && x <= n-1 && y >= 0 && y <= n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x, y, n;
    printf("请输入x、y、n（空格分隔）：");
    scanf("%d%d%d", &x, &y, &n);
    int result = check(x, y, n); // 调用函数
    if(result == 1)
    {
        printf("x和y都在[0, %d]区间内\n", n-1);
    }
    else
    {
        printf("x和y至少有一个不在[0, %d]区间内\n", n-1);
    }
    return 0;
}