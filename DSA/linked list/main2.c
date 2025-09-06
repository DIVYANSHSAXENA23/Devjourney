#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head, *newnode , *temp, *prev;

struct node * create(){
       int x=0;
    
    head=NULL;
    while (x==0){
        newnode=(struct node*)malloc(sizeof(struct node) );
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if (head==NULL)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter 0 to continue");
        scanf("%d",&x);
    }
    return head;
}
void display( struct node* head){
    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
struct node* insert(struct node* head){
        
    //inserting element 
    int ch;
     newnode=(struct node*)malloc(sizeof(struct node) );
     printf("enter data");
    scanf("%d",&newnode->data);
     newnode->next=NULL;
     printf("enter 1 . first \n 2. mid \n 3.last");
     scanf ("%d",&ch);
     if (ch==1){
        newnode->next=head;
        head=newnode;
     }
     if (ch==3){
        temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
     }
     if (ch==2){
        temp=head;
        int i=1;
        int pos;
        printf("enter pos after which you want to enter");
        scanf("%d",&pos);
        while (i<pos){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        
     }
     return (head);



}
struct node* delete_1(struct node* head){
    
    int ch;
    printf("enter 1. to delete first : 2. to delete mid : 3. to delete last");
    scanf("%d",&ch);
    if (ch==1){
        temp=head;
        head=head->next;
        free(temp);

    }
    if (ch==3){
        temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
    if (ch==2){
        temp=head;
        int i=1;
        int pos;
        printf("enter pos after which you want to delete");
        scanf("%d",&pos);
        while (i<pos){
            prev=temp;
           temp=temp->next;
           i++;
        }
        prev->next=temp->next;
      
        free(temp);
        
    }
    return (head);
}


int main(){
    struct node* head;
    head=create();
    int ch;
    int x=0;
    while(x==0){
        printf("enter 1 to insert , enter 2 to display , enter 3 to delete ");
        scanf("%d",&ch);
        if (ch==1){
            head=insert(head);
            
        }
        if (ch==2){
            display(head);
        }
        if (ch==3){
            head=delete_1(head);
        }
        printf("enter 0 to continue");
        scanf("%d",&x);
    }
}

