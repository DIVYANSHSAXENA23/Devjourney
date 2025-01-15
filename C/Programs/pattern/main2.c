#include<stdio.h>
int main()
{
    int i,n,s,f,j;
    s=0;
    printf("enter a number n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f=1;
        for (j=1;j<=i;i++)
        {
            f=f*i;

        }
    }
    s=s+i/f;
printf("%f",s);}