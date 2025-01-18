#include<stdio.h>
void main()
{
    int i,j,a[2][3]={{2,3,6},{3,8,9}};
    for (i=0;i<2;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
}