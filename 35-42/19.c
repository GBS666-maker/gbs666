#include <stdio.h>
void replaceFoo(char *str) {
    char *p = str;
    while(*(p+2) != '\0') { // 确保有3个字符
        if(*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o') {
            *p = 'x'; *(p+1) = 'x'; *(p+2) = 'x';
            p += 3; // 跳过已替换部分
        } else {
            p++;
        }
    }
}
// 测试主函数：
int main() {
    char str[] = "food fool";
    replaceFoo(str);
    printf("%s\n", str); // 输出xxxd xxxl
    return 0;
}