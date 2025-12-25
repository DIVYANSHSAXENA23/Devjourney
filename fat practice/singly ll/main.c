#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create (Insert at end)
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

    if (temp == NULL)
        return;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete at position
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

// Display list
void display() {
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

    // Create list
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d,", &x);
        insertEnd(x);
    }

    display();  // Initial list

    int pos;
    scanf("%d", &pos);
    deleteAtPosition(pos);
    display();  // After delete

    int endValue;
    scanf("%d", &endValue);
    insertEnd(endValue);
    display();  // After insert end

    int begValue;
    scanf("%d", &begValue);
    insertBeginning(begValue);
    display();  // After insert beginning

    int pos2, value2;
    scanf("%d", &pos2);
    scanf("%d", &value2);
    insertAtPosition(pos2, value2);
    display();  // After insert at position

    return 0;
}
