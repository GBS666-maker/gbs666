#include <stdio.h>

int main()
{
    // 倒序循环，k从100到1，每10个数换行
    for (int k = 100; k > 0; k--)
    {
        printf("%d,", k);
        if (k % 10 == 1) // 优化判断：k=11、1时换行（避免末尾多逗号）
            printf("\n");
    }
    return 0;
}