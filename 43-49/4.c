#include <stdio.h>
long f(int g); // 函数声明（递归求斐波那契数）
int main ( ) 
{ 
    long k; 
    k = f(7); // 求第7个斐波那契数（1,1,2,3,5,8,13）
    printf("k= %ld\n", k); // 分析结果：13；运行结果：k= 13
    return 0;
}
long f(int g) 
{ 
    switch(g) 
    { 
        case 0: return 0; 
        case 1: 
        case 2: return 1; // 第1、2个数均为1
        default: return (f(g-1) + f(g-2)); // 递归公式：f(n)=f(n-1)+f(n-2)
    }
}