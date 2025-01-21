#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="computer";
    char str2[20];
    char str3[10]="science";
    printf("\nlenght of str1 is %d",strlen(str1));
    printf("\nconcatination of %s & %s=%s",str1,str2,strcat(str1,str2));
    strcpy(str2,str1);
    printf("\nnow str2 is= %s",str2);
    printf("\nreverse of %s is %s",str1,strrev(str1));
    printf("\ncomparision of str1 and str2=%d",strcmp(str1,str2));
    printf("\ncomparision of str2 and str1=%d",strcmp(str2,str1));
    printf("\nUpper case of %s is %s",str1,strupr(str1));
    printf("\nlower case of %s is %s",str1,strlwr(str1));

}