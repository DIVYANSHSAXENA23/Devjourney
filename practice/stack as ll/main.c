#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *temp,*head,*newnode,*prev;
struct node* create(){
    int x=0;
    while (x==0){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if (head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("enter 0 to continue");
    scanf("%d",&x);

}
return (head);
}
struct node *delete_n(struct node* head){
    temp=head;
    while (temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    return head;
}
void display(struct node* head){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int main(){
    head=NULL;

    int x=0;
    int ch;
    while (x==0){
        printf("enter 1 to insert /// enter 2 to delete /// enter 3 to dislay");
        scanf("%d",&ch);
        if (ch==1){
            head=create();
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
}