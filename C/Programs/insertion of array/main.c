#include<stdio.h>
int main()
{
    int a[100];
    int n,pos,element,i;
    printf("enter no of elemnt");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);

    }
    printf("enter position");
    scanf("%d",&pos);
    if (pos<0||pos>n)
        printf("Invalid");
    else{
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        printf("enter element");
        scanf("%d",&element);
        a[pos-1]=element;
    }
    n++;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}