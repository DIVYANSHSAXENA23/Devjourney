#include<stdio.h>
struct student
{
    char name[20];
    int marks;

}s[3];
void main()
{
    int i;
    for (i=0;i<3;i++)
    {
        printf("enter name");
        scanf("%s",s[i].name);
        printf("enter marks");
        scanf("%d",&s[i].marks);
    }
    for (i=0;i<3;i++)
    {
        printf("\ndetails of student %d: %s\t%d",i,s[i].name,s[i].marks);
    }
}
