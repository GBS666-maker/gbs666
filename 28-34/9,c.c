#include<stdio.h>
int main()
{
    int a[11],i;
    a[0] = 0;  // 初始化累加变量
    for(i=1;i<=10;i++)
        scanf("%d",&a[i]);  // 补充下标i
    for (i=1;i<=10;i++)  // 去掉多余分号
        a[0] = a[0] + a[i];
    printf("Sum=%d\n",a[0]);
    return 0;
}