#include <stdio.h>
int age(int n); // 修正1：函数声明仅1次，且在main之前
int main()
{
    int n=12;
    printf("Age is %d\n", age(n)); 
    return 0; 
}
int age(int n) // 修正1：去掉重复声明
{ 
    int c; 
    if(n == 1) // 修正2：添加递归出口（第1位学生年龄为10岁）
        c = 10;
    else
        c = age(n-1) + 2; // 递归公式：第n位年龄=第n-1位年龄+2
    return c; 
}