#include <stdio.h> 
int main() 
{ 
    float p, salary = 500; // 保底薪水500
    printf("请输入当月工程利润p（元）："); 
    scanf("%f", &p); 
    if (p <= 1000) 
    { 
        // 无提成
    } 
    else if (p <= 2000) 
    { 
        salary += p * 0.1; // 提成10%
    } 
    else if (p <= 5000) 
    { 
        salary += p * 0.15; // 提成15%
    } 
    else if (p <= 10000) 
    { 
        salary += p * 0.2; // 提成20%
    } 
    else 
    { 
        salary += p * 0.25; // 提成25%
    } 
    printf("当月总薪水：%.2f元\n", salary); 
    return 0;
}