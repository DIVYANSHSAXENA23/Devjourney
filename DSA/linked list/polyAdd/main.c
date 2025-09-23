#include<stdio.h>
#include<stdlib.h>
struct node{
    int exp;
    int coeff;
    struct node *next;
};
struct node* head1=NULL,*head2=NULL,*newnode,*temp;
struct node *create(struct node *head){
    int x=0;
    while(x==0){
    newnode=(struct node* )malloc(sizeof(struct node));
    printf("enter coeff");
    scanf("%d",&newnode->coeff);
    printf("enter exp");
    scanf("%d",&newnode->exp);
    if (head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("enter o to continue");
    scanf("%d",&x);
}
return head;
}
void display(struct node *head){
    temp=head;
    while(temp!=NULL){
        printf("%d*x^%d->",temp->coeff,temp->exp);
        temp=temp->next;

    }
    printf("NULL");

}


void main(){
    head1=create(head1);
    display(head1);
     head2=create(head2);
    display(head2);
    printf("test");
}