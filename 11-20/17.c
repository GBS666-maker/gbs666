#include <stdio.h> 
int main() 
{ 
    int num, temp, digit1, digit2, digit3, digit4, digit5; 
    printf("请输入一个不多于5位的正整数："); 
    scanf("%d", &num); 
    temp = num; // 保存原数
    // 判断位数
    if (num >= 10000) 
    { 
        printf("位数：5位\n"); 
        digit5 = num / 10000; 
        digit4 = (num / 1000) % 10; 
        digit3 = (num / 100) % 10; 
        digit2 = (num / 10) % 10; 
        digit1 = num % 10; 
        printf("每一位数字：%d %d %d %d %d\n", digit5, digit4, digit3, digit2, digit1); 
        printf("逆序打印：%d%d%d%d%d\n", digit1, digit2, digit3, digit4, digit5); 
    } 
    else if (num >= 1000) 
    { 
        printf("位数：4位\n"); 
        digit4 = num / 1000; 
        digit3 = (num / 100) % 10; 
        digit2 = (num / 10) % 10; 
        digit1 = num % 10; 
        printf("每一位数字：%d %d %d %d\n", digit4, digit3, digit2, digit1); 
        printf("逆序打印：%d%d%d%d\n", digit1, digit2, digit3, digit4); 
    } 
    else if (num >= 100) 
    { 
        printf("位数：3位\n"); 
        digit3 = num / 100; 
        digit2 = (num / 10) % 10; 
        digit1 = num % 10; 
        printf("每一位数字：%d %d %d\n", digit3, digit2, digit1); 
        printf("逆序打印：%d%d%d\n", digit1, digit2, digit3); 
    } 
    else if (num >= 10) 
    { 
        printf("位数：2位\n"); 
        digit2 = num / 10; 
        digit1 = num % 10; 
        printf("每一位数字：%d %d\n", digit2, digit1); 
        printf("逆序打印：%d%d\n", digit1, digit2); 
    } 
    else 
    { 
        printf("位数：1位\n"); 
        printf("每一位数字：%d\n", num); 
        printf("逆序打印：%d\n", num); 
    } 
    return 0;
}