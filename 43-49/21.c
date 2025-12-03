#include <stdio.h>
#include <string.h>
#define MAX 256 // ASCII字符范围
// 函数：统计字符串中重复字符及次数
void countRepeatChar(char str[])
{
    int count[MAX] = {0}; // 初始化计数数组（下标对应ASCII值）
    int len = strlen(str);
    // 遍历字符串，统计每个字符出现次数
    for(int i = 0; i < len; i++)
    {
        count[(unsigned char)str[i]]++; // 强制转换为无符号，避免负数下标
    }
    // 输出重复字符（出现次数>=2）
    printf("字符串中重复的字符及次数：\n");
    for(int i = 0; i < MAX; i++)
    {
        if(count[i] >= 2)
        {
            printf("字符'%c'：出现%d次\n", i, count[i]);
        }
    }
}
int main()
{
    char str[100];
    printf("请输入一个字符串：");
    scanf("%s", str);
    countRepeatChar(str); // 调用函数
    return 0;
}