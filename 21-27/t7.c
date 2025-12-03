#include <stdio.h>

int main()
{
    char s[] = "ABCCDA";
    // 循环遍历字符串，k从1开始（跳过第一个字符'A'）
    for (int k = 1; s[k] != '\0'; k++)
    {
        switch (s[k])
        {
            case 'A':
                putchar('%');
                continue; // 跳过后续putchar('#')
            case 'B':
                k++; // 跳过下一个字符
                break;
            default:
                putchar('*');
                // 无break，继续执行case 'C'
            case 'C':
                putchar('&');
                continue; // 跳过后续putchar('#')
        }
        putchar('#');
    }
    printf("\n"); // 输出：&*&&%
    return 0;
}