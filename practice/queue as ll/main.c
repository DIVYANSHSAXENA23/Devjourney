#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *temp,*head,*prev,*newnode;
struct node* create(){
    int x=0;
    head=NULL;
        
        while (x==0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if (head==NULL){
            temp=head=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter 0 to continue");
        scanf("%d",&x);
        }
        return head;
       
}

void display(struct node* head){
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }

}
struct node* delete_n(struct node* head){
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
int main(){
    head=NULL;
    int x=0;
    int ch;
    while (x==0){
        printf("enter 1 to create//enter 2 to display//enter 3 to delete");
        scanf("%d",&ch);
        if (ch==1){
            head=create();
        }
        if (ch==2){
            display(head);
        }
        if (ch==3){
            head=delete_n(head);
        }
        printf("enter 0 to continue");
        scanf("%d",&x);
    }
    
    }
