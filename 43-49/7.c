#include <stdio.h>
double max(double a, double b); // 填空处：补充max函数声明（位置在main之前）
int main() 
{ 
    double x, y; 
    scanf("%lf%lf", &x, &y); 
    printf("%.8lf\n", max(x, y)); // 调用max函数，输出较大值
    return 0; 
}
double max(double a, double b) 
{ 
    return (a > b ? a : b); // 三目运算符，返回a、b中较大值
}