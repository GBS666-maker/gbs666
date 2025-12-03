#include <stdio.h> 
int f (int a); // 函数声明（判断是否为奇数，奇数返回1，偶数返回0）
int main() 
{ 
    int s[8] = {1,2,3,4,5,6}, i, d = 0; 
    // 循环条件：f(s[i])为真（即s[i]为奇数）时执行
    for (i = 0; f(s[i]) ; i++) 
        d += s[i]; // 累加奇数：1+3+5=9
    printf("%d\n", d); // 分析结果：9；运行结果：9
    return 0; 
} 
int f(int a) 
{ 
    return a % 2; // 奇数返回1，偶数返回0
}