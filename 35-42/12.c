#include <stdio.h>
int main()
 { int a[10]={1,2,3,4,5,6,7,8,9,0};
 int sum ,*p ;//未定义s
 sum=0;
 p=&a; //p=a
 while( p<p+10)//循环条件p<p+10恒成立
 //改为p<a+10
 s + = *p;//sum+=*p;p++;
 printf(“sum=%d\n”,sum);
 return 0;
}