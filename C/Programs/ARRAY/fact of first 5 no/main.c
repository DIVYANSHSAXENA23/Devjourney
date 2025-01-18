#include<stdio.h>
void main()
{
    int i,f,j,a[5];
    for (i=1;i<6;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {f=f*j;}
        a[i]=f;}
    for (i=1;i<6;i++)
    {
        printf("%d\n",a[i]);
    }

}