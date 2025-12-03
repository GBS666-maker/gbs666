#include <stdio.h> 
void fun (int x, int y ); // 函数声明
int main() 
{ 
    int x = 5, y = 3; 
    fun(x, y); // 传值调用，x、y实参值不变
    printf("%d,%d\n", x, y); // 分析结果：5,3；运行结果：5,3
    return 0; 
} 
void fun (int x, int y ) 
{ 
    x = x + y; // x=8
    y = x - y; // y=5
    x = x - y; // x=3
    printf("%d,%d\n", x, y); // 分析结果：3,5；运行结果：3,5
}