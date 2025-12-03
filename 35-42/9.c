#include <stdio.h> 
int main() 
{ char str[61],*p; 
int i; 
for (i=0;i<60;i++) 
{ str[i]=getchar(); 
if(str[i]==']=n') break; 
}
str[i]=']=0'; // str[i]=']=0'位置错误，应在循环外
p=str; 
while(*p) 
putchar(*p++); // 输出当前值并移动指针
return 0; 
}