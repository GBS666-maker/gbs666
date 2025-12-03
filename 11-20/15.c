#include <stdio.h> 
int main() 
{ 
    int x, y; 
    scanf("%d", &x); 
    if (x > 0) 
        y = x + 3; 
    else if (x == 0) 
        y = 0; // 修正1：x=0时y=0
    else 
        y = x - 3; // 修正2：x<0时y=x-3
    printf("y=%d\n", y); 
    return 0;
}