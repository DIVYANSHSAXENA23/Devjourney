#include<stdio.h>
int main()
{
    int x,y,z,k;
    x=3;
    y= ++x + ++x;

    /*z=x+++y;
    k=++x+y++;
    printf("\n%d",z);
    printf("\n%d",k);*/
    printf("\n%d",x);
    printf("\n%d",y);

    
    return 0;
}