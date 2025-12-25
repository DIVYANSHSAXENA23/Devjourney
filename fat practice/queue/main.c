#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* prev;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue at rear
void enqueue(char x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = rear;

    if (front == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

// Dequeue from front
int dequeue() {
    if (front == NULL) return -1;

    struct Node* temp = front;
    char val = temp->data;

    front = front->next;
    if (front != NULL) front->prev = NULL;
    else rear = NULL;

    free(temp);
    return val;
}

// Copy queue to output buffer
int storeQueue(char arr[]) {
    struct Node* temp = front;
    int i = 0;

    if (temp == NULL) {
        arr[0] = '-';
        arr[1] = '1';
        arr[2] = '\0';
        return 1;
    }

    while (temp != NULL) {
        arr[i++] = temp->data;
        arr[i++] = ' ';
        temp = temp->next;
    }
    arr[i] = '\0';
    return i;
}

// Get MIN
char getMin() {
    if (front == NULL) return -1;

    char mn = front->data;
    struct Node* temp = front->next;

    while (temp != NULL) {
        if (temp->data < mn) mn = temp->data;
        temp = temp->next;
    }
    return mn;
}

// Get MAX
char getMax() {
    if (front == NULL) return -1;

    char mx = front->data;
    struct Node* temp = front->next;

    while (temp != NULL) {
        if (temp->data > mx) mx = temp->data;
        temp = temp->next;
    }
    return mx;
}

int main() {
    int n, d;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char x;
        scanf(" %c", &x);
        enqueue(x);
    }

    // Store initial queue
    char first[200];
    storeQueue(first);

    scanf("%d", &d);

    // Perform dequeues
    for (int i = 0; i < d; i++) {
        if (dequeue() == -1) break;
    }

    // Store queue after dequeue
    char second[200];
    storeQueue(second);

    char mx = getMax();
    char mn = getMin();

    // Print ALL OUTPUT at the end
    printf("%s\n", first);
    printf("%s\n", second);

    if (mx == -1) printf("-1\n");
    else printf("%c\n", mx);

    if (mn == -1) printf("-1\n");
    else printf("%c\n", mn);

    return 0;
}
