#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
} *root,*newnode;
struct node * create(){
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("enter data ....... add -1 to stop");
    scanf("%d",&x);
    if (x==-1){
        return 0;
    }
    else {
        newnode->data=x;
        printf("enter left of %d",x);
        newnode->left=create();
          printf("enter right of %d",x);
        newnode->right=create();
        return newnode;
         }
}
void main(){
    root=create();
}
