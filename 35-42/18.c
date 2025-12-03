#include <stdio.h>
#include <string.h>
int main() {
    char str[100], *p = str, *q;
    gets(str);
    q = p + strlen(str) - 1; // q指向字符串末尾
    while(q >= p) {
        putchar(*q--);
    }
    printf("\n");
    return 0;
}