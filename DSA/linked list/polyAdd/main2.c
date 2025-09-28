#include <stdio.h>
#include <stdlib.h>

struct node {
    int exp;
    int coeff;
    struct node *next;
};

// create a polynomial linked list
struct node* create(struct node *head) {
    struct node *newnode, *temp = NULL;  // ✅ made temp LOCAL, not global
    int choice = 1;                      // ✅ clearer flag variable name

    while (choice == 1) {                // ✅ changed loop condition
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter coeff: ");
        scanf("%d", &newnode->coeff);
        printf("Enter exp: ");
        scanf("%d", &newnode->exp);

        newnode->next = NULL;            // ✅ always initialize next

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Enter 1 to continue, 0 to stop: "); // ✅ clarified message
        scanf("%d", &choice);
    }
    return head;
}

void display(struct node *head) {
    struct node *temp = head;            // ✅ use local temp here too
    while (temp != NULL) {
        printf("%d*x^%d -> ", temp->coeff, temp->exp);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct node *add(struct node *head1,struct node *head2){
    struct node *head3=NULL;
    struct node *poly1=head1;
    struct node *poly2=head2;
    struct node *poly3=NULL;
    struct node *newnode;
    while(poly1!=NULL && poly2!=NULL){
        newnode=(struct node*)malloc(sizeof(struct node));
        if (poly1->exp==poly2->exp){
            newnode->coeff=poly1->coeff+poly2->coeff;
            newnode->exp=poly1->exp;
            poly1=poly1->next;
            poly2=poly2->next;
        }
        else if (poly1->exp>poly2->exp){
            newnode->coeff=poly1->coeff;
            newnode->exp=poly1->exp;
            poly1=poly1->next;
        }
        else if (poly1->exp<poly2->exp){
            newnode->coeff=poly2->coeff;
            newnode->exp=poly2->exp;
            poly2=poly2->next;
        }
        if (head3==NULL){
            head3=poly3=newnode;
        }
        else{
            poly3->next=newnode;
            poly3=newnode;
        }
    }
    while(poly1!=NULL){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->coeff=poly1->coeff;
        newnode->exp=poly1->exp;
        newnode->next=NULL;
        if (head3==NULL){
            head3=poly3=newnode;
        }
        else{
            poly3->next=newnode;
            poly3=newnode;
        }
        poly1=poly1->next;

    }
      while(poly2!=NULL){
         newnode=(struct node*)malloc(sizeof(struct node));
        newnode->coeff=poly2->coeff;
        newnode->exp=poly2->exp;
        newnode->next=NULL;
        if (head3==NULL){
            head3=poly3=newnode;
        }
        else{
            poly3->next=newnode;
            poly3=newnode;
        }
        poly2=poly2->next;

    }
    return head3;
}

int main() {
    struct node *head1 = NULL, *head2 = NULL,*head3=NULL ; // ✅ removed global heads, declared local in main

    printf("Enter first polynomial:\n");
    head1 = create(head1);
    display(head1);

    printf("\nEnter second polynomial:\n");
    head2 = create(head2);
    display(head2);
    head3= add(head1,head2);
    display(head3);

    return 0;
}
