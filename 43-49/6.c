#include <stdio.h> 
int square(int x); // 函数声明（求平方）
int  cube(int y);   // 函数声明（求立方）
int main() 
{ 
    int m = 12; 
    int n = 4; 
    // 传值调用，m、n实参值不变，函数返回计算结果
    printf("%d %d\n", square(m), m); // 分析结果：144 12；运行结果：144 12
    printf("%d %d\n", cube(n), n);   // 分析结果：64 4；运行结果：64 4
    return 0; 
} 
int square(int x) 
{ 
    x = x * x; 
    return x; 
} 
int cube(int y) 
{ 
    y = y * y * y; 
    return y; 
}