#include<stdio.h>
#include<math.h>
void main()
{
    int x;
    read:

        printf("enter a number");
        scanf("%d",&x);
        if(x<0)
        {
            goto read;
        }
        else
        {
            printf("%f",sqrt(x));
        }
}
