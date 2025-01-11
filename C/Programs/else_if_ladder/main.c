#include<stdio.h>
int main()
{
    int x;
    printf("enter a number from 1-3 : ");
    scanf("%d",&x);
    if (x==1)
    {
        printf("One");
    }
    else if(x==2)
    {
        printf("Two");
    }
    else if(x==3)
    {
        printf("three");
    }
    else
    {
        printf("Invalid");
    }
}