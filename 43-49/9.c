#include <stdio.h>
int mystrlen(char str[]) 
{ 
    int i; 
    for(i = 0; str[i] != '\0'; i++); // 填空1：str[i]（判断字符串结束符）
    return i; // 填空2：i（返回字符串长度，即循环次数）
} 
int main ( ) 
{ 
    char str[100]; 
    printf("请输入一个字符串："); 
    scanf("%s", str); // 输入字符串（不含空格）
    int len = mystrlen(str); // 调用自定义函数，获取长度
    printf("字符串长度为：%d\n", len); // 输出结果
    return 0;
}