#include <stdio.h>
#include <string.h>
typedef int (*StrCmp)(const char *, const char *); // 函数指针类型
int main() {
    char str1[100], str2[100];
    StrCmp cmp = strcmp; // 绑定strcmp函数
    gets(str1); gets(str2);
    if(cmp(str1, str2) == 0) {
        printf("两行字符串一致\n");
    } else {
        printf("两行字符串不一致\n");
    }
    return 0;
}
