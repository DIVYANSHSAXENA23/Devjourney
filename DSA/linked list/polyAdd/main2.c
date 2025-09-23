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

int main() {
    struct node *head1 = NULL, *head2 = NULL; // ✅ removed global heads, declared local in main

    printf("Enter first polynomial:\n");
    head1 = create(head1);
    display(head1);

    printf("\nEnter second polynomial:\n");
    head2 = create(head2);
    display(head2);

    return 0;
}
