#include<stdio.h>
int main()
{
    int a[11],i;
    a[0] = 0;  
    for(i=1;i<=10;i++)
        scanf("%d",&a[i]);  
    for (i=1;i<=10;i++)  
        a[0] = a[0] + a[i];
    printf("Sum=%d\n",a[0]);
    return 0;
}