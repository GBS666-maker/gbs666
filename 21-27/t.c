#include <stdio.h>

int main()
{
    int a = 2, b = 8;
    // 循环条件：b先判断再自减，循环内先减a再让a自增
    while (b-- > 0)
    {
        b -= a;
        a++;
    }
    printf("a=%d, b=%d\n", a, b); // 输出：a=5, b=-4
    return 0;
}