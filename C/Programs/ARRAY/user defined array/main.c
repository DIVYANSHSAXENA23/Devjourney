#include<stdio.h>
void main()
{
    int i,a[5];
    for (i=0;i<5;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}