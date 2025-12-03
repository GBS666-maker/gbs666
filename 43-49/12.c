#include <stdio.h>
int sstrcmp(char s[], char t[])
{
    int i=0,j=0;
    while(s[i]&&t[j]&& s[i]==t[i]); // 错误1：循环条件中t[i]应为t[j]（j为t数组下标）；错误2：while后多分号（循环仅执行1次）
    return s[i]-t[j];
}
int main()
{
    int x;
    char s1[50], s2[50];
    scanf("%s%s", s1, s2);
    x = sstrcmp(s1, s2);
    printf("%d\n", x);
    return 0;
}