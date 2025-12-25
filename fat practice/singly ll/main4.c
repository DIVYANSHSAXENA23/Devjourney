#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertend(int value){

    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if (head==NULL){
        head=newnode;
    }
    else {
        struct node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void printll(){
    struct node* temp=head;
    while (temp!=NULL){
        printf("%d",temp->data);
        if (temp->next!=NULL) printf(",");
        temp=temp->next;
    }
}
void del_pos(int pos){
    struct node* temp=head;
    for (int i=1;i<pos-1 && temp->next!=NULL;i++){
        temp=temp->next;
    }
    struct node* del=temp->next;
    temp->next=temp->next->next;
    free(del);
}
void insertbeg(int value){
    struct node*temp=head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    
    
    head=newnode;
    
}
void insert(int ins_pos,int ele){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    struct node*temp=head;
    for (int i=1;i<ins_pos-1 && temp->next!=NULL;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int main(){
    int n,pos,ins_e,ins_b,ins_p,ele;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        insertend(arr[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&ins_e);
    scanf("%d",&ins_b);
    scanf("%d",&ins_p);
    scanf("%d",&ele);
     printll();
     printf("\n");
    del_pos(pos);
    printll();
    printf("\n");
    insertend(ins_e);
    printll();
    printf("\n");
    insertbeg(ins_b);
    printll();
    printf("\n");
    insert(ins_p,ele);
    printll();
   
}