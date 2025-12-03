#include <stdio.h>
double fun(double x, int y) 
{ 
    int i; 
    double z; 
    for(i = 1, z = x; i < y; i++) 
        z = z * x; // 填空处：x（循环累乘x，实现x的y次方）
    return z; 
} 
int main( ) 
{ 
    double x; 
    int y; 
    printf("请输入x和y（x为小数，y为整数）："); 
    scanf("%lf%d", &x, &y); 
    double result = fun(x, y); // 调用fun函数，计算x^y
    printf("%.2lf的%d次方 = %.2lf\n", x, y, result); // 输出结果
    return 0;
}