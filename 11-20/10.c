#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    float a, b, c; 
    float s, area; 
    scanf("%f,%f,%f", &a, &b, &c); // 修正：去掉中文引号
    if (a + b > c && a + c > b && b + c > a) // 填空1：构成三角形条件
    { 
        s = (a + b + c) / 2; 
        area = sqrt(s * (s - a) * (s - b) * (s - c)); 
        printf("三角形的面积为:%f\n", area); 
        if (a == b && b == c) // 填空2：等边三角形条件
            printf("等边三角形\n"); 
        else if (a == b || a == c || b == c) // 填空3：等腰三角形条件
            printf("等腰三角形\n"); 
        else if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a)) 
            printf("直角三角形\n"); // 修正：调整顺序，避免逻辑冲突
        else 
            printf("一般三角形\n"); 
    } 
    else 
        printf("不能组成三角形\n"); 
    return 0;
}