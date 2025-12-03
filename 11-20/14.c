#include <stdio.h> 
int main() 
{ 
    int x, y; 
    scanf("%d", &x); 
    y = x - 3; // 错误1：x=0时先赋值y=-3，覆盖后续逻辑
    if (x != 0) 
        if (x > 0) y = x + 3; 
        else y = x; // 错误2：x<0时赋值y=x，未按公式y=x-3
    printf("y=%d\n", y); 
    return 0;
}