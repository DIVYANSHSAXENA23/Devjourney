#include<stdio.h>
int main()
{
    int a,b,c,n,i,d;
    a=0;
    b=1;
    printf("enter a number");
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d",a);
    }
    if (n==2)
    {
        printf("%d%d",a,b);
    }
    else
    {
        printf("%d%d",a,b);
        for(i=3;i<=n;i++)
        {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }

    }
}