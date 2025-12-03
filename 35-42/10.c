#include <stdio.h> 
void mystrcat(char *pa,char *pb) 
{
while(*pa!='\0')pa++;//pa指向第一个字符串的尾部 
while(*pb!='\0'){
    *pa = *pb; // pb字符到pa
    pa++; pb++; // 指针均后移
}
*pa='\0'; 
} 
int main() 
{ char a[90],b[30]; 
gets(a);
gets(b); 
mystrcat(a,b); // 调用连接函数
printf("\n 链接后的字符串是:%s\n",a); 
return 0;
}