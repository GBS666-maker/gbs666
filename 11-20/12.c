#include <stdio.h> 
int main() 
{ 
    int x, y; 
    scanf("%d", &x); // 修正：去掉中文引号
    if (3 < x <= 9) y = x * (x + 2); // 错误1：关系表达式写法错误（C语言不支持连续判断）
    else if (-1 < x <= 3) y = 2 * x; // 错误2：同上
    else if (x <= -1) y = x - 1;
    else y = -1; 
    printf("%d\n", y); // 修正：去掉中文引号
    return 0;
}