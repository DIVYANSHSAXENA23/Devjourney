#include<stdio.h>
#include<stdlib.h>
struct node{
    int item;
    struct node *next;
}*head,*newnode,*temp;
void display(){
     int x=0;
    head=NULL;
    while (x==0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter element");
        scanf("%d",&newnode->item);
        newnode->next=NULL;
        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter 0 to continuee");
        scanf("%d",&x);
    }
}
void print_list(){
     if(head==NULL){
        printf("LIST IS EMPTY");

    }
    else{
        temp=head;
        while (temp){
            printf("%d-> ",temp->item);
            temp=temp->next;
        }
        printf("NULL");
    }
}
void delete_list(){
    int ch;
    printf("deleting element");
    printf("1.first\n2.last\n3.position");
    scanf("%d",&ch);
    if (ch==1){
        temp=head;
        head=head->next;
        free(temp);
    }
}
    


void main(){
    int a;
    int i=0;
    while (i==0){
    printf("enter 1. to enter element \n 2. print \n 3.delete");
    scanf("%d",&a);
    if (a==1){
        display();
    }
    if (a==2){
        print_list();
    }
     if (a==3){
        delete_list();
    }
    printf("enter 0 to show the menu bar");
    scanf("%d",&i);

   
}
}
