#include <stdio.h>
// 函数：返回长度为n的数组a的中间元素指针（n偶数选a[n/2]）
int *find_middle(int a[], int n)
{
    if(n <= 0) return NULL; // 异常输入返回空指针
    int mid = n / 2; // 中间下标（n奇数：n/2；n偶数：n/2（较大下标））
    return &a[mid]; // 返回中间元素的地址（指针）
}
int main()
{
    int arr1[5] = {1,2,3,4,5}; // n=5（奇数），中间元素a[2]
    int arr2[4] = {10,20,30,40}; // n=4（偶数），中间元素a[2]
    int *p1 = find_middle(arr1, 5);
    int *p2 = find_middle(arr2, 4);
    printf("arr1中间元素：%d\n", *p1); // 输出：3
    printf("arr2中间元素：%d\n", *p2); // 输出：30
    return 0;
}