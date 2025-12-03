#include <stdio.h>

int main()
{
    int x = 2, y = 6, z = 3;
    // do-while：先执行y自减，再判断z自减且x自增的条件
    do
    {
        y--;
    } while (z-- > 0 && ++x < 5); // 循环执行2次后退出
    printf("x=%d\ty=%d\tz=%d\n", x, y, z); // 输出：x=4  y=4  z=1
    return 0;
}