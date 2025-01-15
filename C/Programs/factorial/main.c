#include<stdio.h>
int main()
{
    int x,i,f=1;
    printf("enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
printf("factorial is %d",f);
}