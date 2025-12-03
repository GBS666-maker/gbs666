#include <stdio.h>
 int main( )
 { int u=v=89;//错误，必须先对v定义再赋值，应改为int u,v;
 printf(“u=%d,v=%d\n”,u,v); 
 return 0;
 }//结果为u=89,v=89