#include<stdio.h>

int add()
{
    int c=2;
    int d=4;
    int e=c+d;
    return e;
}


void main()
{
    int add(void);
    int result;
    result = add();
    printf("%d",result);

}

