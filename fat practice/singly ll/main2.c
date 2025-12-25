#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at end
void insertEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Insert at beginning
void insertBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at given position (1-based)
void insertAtPosition(int pos, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete at a given position
void deleteAtPosition(int pos) {
    if (head == NULL) return;

    struct Node* temp = head;

    if (pos == 1) {
        head = head->next;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    if (temp->next == NULL) return;

    struct Node* del = temp->next;
    temp->next = temp->next->next;
    free(del);
}

// Function to print list
void printList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf(",");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d,", &arr[i]);    

    int delPos, endVal, begVal, insPos, insVal;

    scanf("%d", &delPos);   // deletion position
    scanf("%d", &endVal);   // insert at end
    scanf("%d", &begVal);   // insert at beginning
    scanf("%d", &insPos);   // insert at given pos
    scanf("%d", &insVal);   // element to insert

    // All INPUTS ARE READ — NOW PERFORM OPERATIONS

    // Step 1: Create list
    for (int i = 0; i < n; i++)
        insertEnd(arr[i]);

    // Store results in order
    printList();                     // initial

    deleteAtPosition(delPos);
    printList();                     // after deletion

    insertEnd(endVal);
    printList();                     // after end insert

    insertBeginning(begVal);
    printList();                     // after beginning insert

    insertAtPosition(insPos, insVal);
    printList();                     // after position insert

    return 0;
}
