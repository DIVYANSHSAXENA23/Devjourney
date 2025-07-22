#include<stdio.h>
#include<stdlib.h>
struct node{
    int item;
    struct node *next;
}*head,*newnode,*temp,*prevnode;
void insert(){
     int x=0;
    head=NULL;
    while (x==0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter element");
        scanf("%d",&newnode->item);
        newnode->next=NULL;
       
        int pos;
        printf("enter the position to insert 1. first\n 2. specific pos \n 3. last");
        scanf("%d",&pos);
        if (pos==3){
        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
        if(pos==2){
            temp=head;
            int posi;
            int i=1;
            printf("enter the pos you want to insert : ");
            scanf("%d",&posi);
            while (i<(posi-1)){
                temp=temp->next;
                i++;
            } 
            newnode=temp->next;
            temp->next=newnode;
            //not inserting bw the positions
        }

        if (pos==1){
            newnode->next=head;
            head=newnode;
        }
            
        
        printf("enter 0 to ADD More elements");
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
    if (ch==2){
        temp=head;
        while(temp->next!=NULL){
            prevnode=temp;
            temp=temp->next;
        }
        free(temp);
        prevnode->next=NULL;
    }
    if (ch==3){
        temp=head;
        int posi;
        int i=1;
        printf("enter the pos you want to delete from : ");
        scanf("%d",&posi);
        while (i<(posi-1)){
            temp=temp->next;
            i++;
            } 
     //incomplete   
    }
}
    


void main(){
    int a;
    int i=0;
    while (i==0){
    printf("enter 1. to insert \n 2. print \n 3.delete");
    scanf("%d",&a);
    if (a==1){
        insert();
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
