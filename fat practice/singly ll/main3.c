#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
void insertatend(int value){
    
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if (head==NULL){
        head=newnode;
    }
    else{
        struct node *temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void printll(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delete(int pos){
    struct node* temp=head;
    for (int i=1;i<pos-1 && temp->next!=NULL;i++){
        temp=temp->next;
    }
    struct node* del=temp->next;
    temp->next=temp->next->next;
    free(del);

}
void insertatbeg(int b){
    struct node* temp=head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=b;
    newnode->next=head;
    head=newnode;
    
}
void insertatpos(int in_p,int in){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = in;
    struct node* temp=head;
    for (int i=1;i<in_p-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    newnode->next =temp->next;
    temp->next=newnode;
}
int main(){
    int n,pos,e,b,in_p,in;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        insertatend(arr[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&e);
    scanf("%d",&b);
    scanf("%d",&in_p);
    scanf("%d",&in);
    printll();
    printf("\n");
     delete(pos);
   
    printll();
    printf("\n");
    insertatend(e);

    printll();
    printf("\n");
    insertatbeg(b);
    printll();
    printf("\n");
    insertatpos(in_p,in);
    printll();
}