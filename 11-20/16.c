#include <stdio.h> 
int main() 
{ 
    int sex, weight, cubage; 
    printf("请输入输血者性别(男=0/女=-1)和体重(kg)（逗号分隔）："); 
    scanf("%d,%d", &sex, &weight); 
    if (sex >= 0) // 男性
    { 
        cubage = (weight >= 120) ? 200 : 180; 
    } 
    else // 女性
    { 
        cubage = (weight >= 100) ? 150 : 120; 
    } 
    printf("此人应输血：%d毫升\n", cubage); 
    return 0;
}