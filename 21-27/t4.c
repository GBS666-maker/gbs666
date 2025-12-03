#include <stdio.h>

int main()
{
    // 上半部分菱形：5行，每行空格递减、星号递增
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 3 - i; j++)
            printf(" ");
        for (int k = 0; k <= 2 * i; k++)
            printf("*");
        printf("\n");
    }
    // 下半部分菱形：4行，每行空格递增、星号递减
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= i; j++)
            printf(" ");
        for (int k = 0; k <= 6 - 2 * i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}