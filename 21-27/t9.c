#include <stdio.h>

int main()
{
    int a = 2, sum = 0, power = 1; // power表示2的幂
    // 循环7次，计算2¹到2⁷的和
    for (int count = 1; count <= 7; count++)
    {
        power *= 2;
        sum += power;
    }
    printf("s=%d\n", sum); // 输出：2+4+8+...+128=254
    return 0;
}