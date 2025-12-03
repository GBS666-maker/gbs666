#include <stdio.h>
int main() {
    int a[15] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
    int key, *p = a, pos = -1;
    printf("输入要查找的数：");
    scanf("%d", &key);
    for(int i=0; i<15; i++) {
        if(*(p+i) == key) {
            pos = i+1; // 位置从1开始
            break;
        }
    }
    pos != -1 ? printf("位置：%d\n", pos) : printf("No Found\n");
    return 0;
}