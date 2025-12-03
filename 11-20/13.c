#include <stdio.h> 
int main() 
{ 
    int x, y; 
    scanf("%d", &x); 
    if (x > 3 && x <= 9) y = x * (x + 2); // 修正1：拆分关系表达式
    else if (x > -1 && x <= 3) y = 2 * x; // 修正2：拆分关系表达式
    else if (x <= -1) y = x - 1;
    else y = -1; 
    printf("%d\n", y); 
    return 0;
}