#include<stdio.h>
struct student
{
    int marks;
    float age;

};
struct student s1={20,3.5};
struct student s2={30,4};
void main()
{
    struct student s3;
    int x;
    s3=s1;
    x=(s1.marks==s3.marks && s1.age==s3.age)?1:0;
    if (x==1)
    {
        printf(" same");
    }
    else
    {
        printf("not same");
    }
}
