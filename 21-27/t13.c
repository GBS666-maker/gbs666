#include <stdio.h>

int main()
{
    int i = 1;
    // 死循环+break：i从1到100，每10个数换行
    while (1)
    {
        printf("%4d", i);
        if (i % 10 == 0)
            printf("\n");
        if (i == 100) // 优化判断：i=100时退出（原i>100逻辑冗余）
            break;
        i++; // 移到循环末尾，避免原代码中i%100+1的冗余计算
    }
    return 0;
}