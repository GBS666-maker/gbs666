#include <stdio.h>
int sstrcmp(char s[], char t[])
{
    int i=0,j=0;
    // 修正1：将t[i]改为t[j]；修正2：去掉while后的分号，添加循环体（i++、j++）
    while(s[i] && t[j] && s[i] == t[j])
    {
        i++;
        j++;
    }
    return s[i]-t[j]; // 比较第一个不同字符的ASCII值差
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