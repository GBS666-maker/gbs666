#include <stdio.h>
#include <string.h>
int main()
{
    char a[10],b[10];
    int c,d,k;
    scanf("%s",a);  
    scanf("%s",b);
    printf("a=%s,b=%s\n",a,b);
    c=strlen(a);
    d=strlen(b);
    if(c>d)
    {   for(k=0;k<=d;k++)  
        {
            char ch=a[k];  
            a[k]=b[k];
            b[k]=ch;
        }
    }
    printf("a=%s,b=%s\n",a,b);
    return 0;
}