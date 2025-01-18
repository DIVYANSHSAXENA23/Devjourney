#include<stdio.h>
int main()
{
    int i,x;
    int a[6]={2,3,6,8,9,10};
    int found=0;
    printf("enter element");
    scanf("%d",&x);
    for(i=0;i<6;i++)
    {
        if(a[i]==x)
        {
            found=1;
            break;
        }
        
     
    }
    if (found==0)
    {
        printf("no element found");
    }
    else
    {
        printf("%d",i);
    }



}