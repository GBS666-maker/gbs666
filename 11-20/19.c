#include <stdio.h> 
int main() 
{ 
    int num, ge, shi, bai; 
    printf("请输入一个三位数："); 
    scanf("%d", &num); 
    if (num < 100 || num > 999) 
    { 
        printf("输入错误！请输入三位数。\n"); 
        return 1; 
    } 
    bai = num / 100; // 百位
    shi = (num / 10) % 10; // 十位
    ge = num % 10; // 个位
    // 判断是否为水仙花数
    if (bai * bai * bai + shi * shi * shi + ge * ge * ge == num) 
    { 
        printf("%d是水仙花数！\n", num); 
    } 
    else 
    { 
        printf("%d不是水仙花数！\n", num); 
    } 
    return 0;
}