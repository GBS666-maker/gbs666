#include <stdbool.h>
bool search(int a[], int n, int key) {
    int *p = a;
    for(; p < a+n; p++) {
        if(*p == key) return true;
    }
    return false;
}
// 测试主函数：
#include <stdio.h>
int main() {
    int arr[] = {2,4,6,8};
    printf("%d\n", search(arr,4,6)); // 输出1（true）
    return 0;
}