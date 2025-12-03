#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "apple", temp;
    int len = strlen(a), i;
    for (i=0; i<len/2; i++) {
        temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
    printf("%s", a);
    return 0;
}