#include <stdio.h>
int main() {
    // 一维数组（10元素）
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p1 = arr1, **pp1 = &p1;
    printf("一维数组：");
    for(int i=0; i<10; i++) {
        printf("%d ", *(*pp1 + i));
    }
    printf("\n");
    
    // 二维数组（3行4列）
    int arr2[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *p2[3] = {arr2[0], arr2[1], arr2[2]}, **pp2 = p2;
    printf("二维数组：\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", *(*(pp2 + i) + j));
        }
        printf("\n");
    }
    return 0;
}