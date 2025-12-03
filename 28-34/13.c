 #include <stdio.h>
int main() {
    char c;
    int letter=0, space=0, digit=0, other=0;
    while ((c=getchar()) != '\n') {
        if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')) letter++;
        else if (c==' ') space++;
        else if (c>='0'&&c<='9') digit++;
        else other++;
    }
    printf("字母:%d 空格:%d 数字:%d 其他:%d", letter, space, digit, other);
    return 0;
}