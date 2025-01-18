#include<stdio.h>
void main()
{
    int i,j, m1[3][3],m2[3][3], m3[3][3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter [%d][%d] element of m1 ",i,j);
            scanf("%d",&m1[i][j]);
            printf("enter [%d][%d] element of m2 ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
       printf("matrix 1");
       for (i=0;i<3;i++)
       {printf("\n");
        for (j=0;j<3;j++)
        {printf("%d ",m1[i][j]);}
       }
       printf("\nmatrix 2");
         for (i=0;i<3;i++)
       {printf("\n");
        for (j=0;j<3;j++)
        {printf("%d ",m2[i][j]);}
       }
       for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
      printf("\nmatrix 3");
         for (i=0;i<3;i++)
       {printf("\n");
        for (j=0;j<3;j++)
        {printf("%d ",m3[i][j]);}
       }
    
    

}