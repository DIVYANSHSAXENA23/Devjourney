#include<stdio.h>
int main()
{
    int i,n;
    
    float s=1;
    printf("enter a number n");
    scanf("%f",&n);
    for(i=2;i<=n;i++)
    {
        s=s+(1/(float)i);
    }
    printf("sum is %f",s);
}