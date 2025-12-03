#include <stdio.h>

int main()
{
    int n = 2345, sum = 0;
    // do-while：先计算再判断，确保n=0时也能执行一次
    do
    {
        sum += (n % 10) * (n % 10); // 累加当前位的平方
        n /= 10; // 去掉当前最低位
    } while (n);
    printf("sum=%d\n", sum); // 输出：2²+3²+4²+5²=54
    return 0;
}