#include <stdio.h>

int main()
{
    // 找1-100中，x+1偶、x+2能被3整除、x+3能被7整除的数
    for (int i = 1; i <= 100; i++)
    {
        if ((i + 1) % 2 == 0 && (i + 2) % 3 == 0 && (i + 3) % 7 == 0)
        {
            printf("%d,", i + 3); // 输出满足条件的x（即i+3）
        }
    }
    printf("\n"); // 输出：28,70,
    return 0;
}