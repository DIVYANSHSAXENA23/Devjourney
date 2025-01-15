#include<stdio.h>
int main()
{
    int S,D;
    float a,b,c,d,R;
    printf("enter a number a,b,c,d");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    S=a+b;
    D=c-d;
    if (D==0)
    {
        printf("c-d is equal to 0");
    }
    else
    {
        R=S/D;
        printf("ratio is %f",R);
    }
}