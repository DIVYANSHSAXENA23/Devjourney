#include<stdio.h>
int main()
{
    float x,sum=0;
    int i;
    for(i=1;i<=11;i++)
    {
        printf("enter the number");
        scanf("%f",&x);
        sum=sum+x;

    }
    printf("average =%f",(sum/10));
}