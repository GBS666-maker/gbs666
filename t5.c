#include<stdio.h>
int main()
{
    int x,y;      //错误在第四行，未定义y，结果应为5，20，8
    x=5,y=8;
    printf("\n%d,%d,%d\n",x,(x+5)*2,y);
    return 0;
}