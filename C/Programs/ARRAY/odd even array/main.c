#include<stdio.h>
void main()
{
    int i,odd[10],even[10],x,a=0,b=0;
    for (i=0;i<10;i++)
    {
        printf("enter a no");
        scanf("%d",&x);
        if (x%2==0)
        {
            even[a]=x;
            a++;
        }
        else
        {
            odd[b]=x;
            b++;
        }
    }
    printf("%d",odd[b]);
    printf("%d",even[a]);
    
}