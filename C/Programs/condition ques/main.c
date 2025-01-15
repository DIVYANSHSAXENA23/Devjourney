#include<stdio.h>
int main()
{
    int c,h,w,i;
    c=0;
    for(i=1;i<=11;i++)
    {
        printf("enter a number");
        scanf("%d",&h);
        printf("height");
        scanf("%d",&w);

    }
    if ((h>150) && (w>50))
    {
        c++;
    }
    printf("students of given data are %d",c);
}