#include <stdio.h>
int main()
{ int a , b ;
int *p ,*q ;
printf("请输入两个整数:");
scanf("%d,%d", p ,q); //p q未初始化，a b未赋值
//改正为p=&a;p=&b;scanf（"%d,%d",p,q);
printf("%d,%d\n",a ,b);
printf("%d,%d\n",*p,*q);
return 0;
}