#include <stdio.h> 
int main() 
{ 
    int a, b, c; 
    a = 10; b = 60; c = 30; 
    if (a > b) a = b; // a=10不大于b=60，不执行
    b = c; // b=30
    c = a; // c=10
    printf("a=%d,b=%d,c=%d\n", a, b, c); // 分析结果：a=10,b=30,c=10；运行结果：a=10,b=30,c=10
    return 0;
}