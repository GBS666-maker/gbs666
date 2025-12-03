#include <stdio.h>
int main() {
    float total=100, height=50;
    for (int i=2; i<=10; i++) {
        total += 2*height;
        height /= 2;
    }
    printf("第10次落地共经过:%.2f米 第10次反弹高度:%.2f米", total, height);
    return 0;
}