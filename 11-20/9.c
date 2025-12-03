#include <stdio.h> 
int main() 
{ 
    char ch; 
    scanf("%c", &ch); 
    if (ch >= 'A' && ch <= 'Z') ch = ch + 32; // 填空1：大写转小写
    else if (ch >= 'a' && ch <= 'z') ch = ch - 32; // 填空2：小写转大写
    printf("%c\n", ch); 
    return 0;
}