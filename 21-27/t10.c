#include <stdio.h>

int main()
{
    int count = 0; // 统计符合条件的组合数
    // 三重循环：i+2j+5k=100，优化循环范围减少计算
    for (int i = 0; i <= 100; i++)
        for (int j = 0; j <= 50; j++)
            for (int k = 0; k <= 20; k++) // k最大为20（5*20=100）
                if (i + 2 * j + 5 * k == 100)
                {
                    count++;
                    printf("第%d种: %3d %3d %3d\n", count, i, j, k);
                    if (count % 3 == 0)
                        printf("\n"); // 每3种换行
                }
    return 0;
}