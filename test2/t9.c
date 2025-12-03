#include <stdio.h>
int main()
{
int x,y,a;
scanf("%x,%y",&x,&y); //错误，没有%y，且%x为十六进制整数，改为scanf("%d,%d",&x,&y);
a=(x+y)/2;
printf("The average is %d:\n", a); 
 return 0;
 }
/* 结果为
2,6        4
1,4        2
-1,-3       -2
-2,4       1
2,0        1
*/