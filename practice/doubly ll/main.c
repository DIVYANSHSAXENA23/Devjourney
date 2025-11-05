#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head,*temp,*prev,*newnode;
struct node* insert(){
    int x=0;
    while (x==0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("enter 0 to continue");
        scanf("%d",&x);
    }
    return head;
}
struct node* delete_n(struct node* head){
    int x=0;
    int ch;
   
        printf("enter 1 to delete from beg/// enter 2 to delete from last/// enter 3 to delete from specific pos");
        scanf("%d",&ch);
        if (ch==1){
            temp=head;
            head=head->next;
            head->prev=NULL;
            free(temp);
        }
        else if (ch==2){
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->prev->next=NULL;
            free(temp);
        }
        else if (ch==3){
            temp=head;
            int pos;
            int i=1;
            printf("enter pos from which you want to delete");
            scanf("%d",&pos);
            while (i<pos && temp!=NULL){
                temp=temp->next;
                i=i+1;
                
            }
            temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
        }
    
    return head;
}
void display(struct node* head){
    temp=head;
    while (temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main(){
    int x=0;
    int ch;
    while (x==0){
        printf("enter 1 to insert// enter 2 to delete // enter 3 to display");
        scanf("%d",&ch);
        if (ch==1){
            head=insert();
        }
        if (ch==2){
            head=delete_n(head);
        }
        if (ch==3){
            display(head);
        }
        printf("enter 0 to continue");
        scanf("%d",&x);
    }
    return 0;
}