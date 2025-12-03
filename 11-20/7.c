#include <stdio.h> 
int main() 
{ 
    int x, y; 
    printf("请输入自变量x:"); 
    scanf("%d", &x); 
    if (x < 6) 
    { 
        y = x - 12; 
        printf("x = %d, y = %d\n", x, y);
    } 
    else if (x < 15) 
    { 
        y = 3 * x - 1; 
        printf("x = %d, y = %d\n", x, y);
    } 
    else 
    { 
        y = 5 * x + 9; 
        printf("x = %d, y = %d\n", x, y);
    }
    return 0;
}
/* 分析结果：x=5→y=-7；x=10→y=29；x=20→y=109；运行结果同分析 */