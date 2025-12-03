#include <stdio.h>
int main()
{
    int age( int n); // 函数声明
    int n=12;
    printf("Age is %d\n", age (n)); 
    return 0; 
    int age(int n); // 错误1：函数声明重复（且在main函数内，位置错误）
    { 
        int c; 
        c = age (n-1)+2 ; // 错误2：无递归出口（n=1时仍调用age(0)，陷入死循环）
        return ( c ) ; 
    }
}