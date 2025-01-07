#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,ci,a;
    int t;
    printf("enter principal");
    scanf("%f",&p);
    printf("enter rate");
    scanf("%f",&r);
    printf("enter time");
    scanf("%d",&t);
    a=p*pow((1+r/100),t);
    ci=a-p;
    printf("%f",ci);
    return 0;
}
