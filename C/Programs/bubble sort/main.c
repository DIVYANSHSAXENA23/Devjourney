#include<stdio.h>
int main()
{
    int a[100];
    int n,pos,temp,i,j;
    printf("enter no of elemnt");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}