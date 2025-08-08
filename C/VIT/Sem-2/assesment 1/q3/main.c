#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push to stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

// Pop from stack
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int main() {
    int n;
    char token[10];

    printf("Enter number of tokens: ");
    scanf("%d", &n);

    printf("Enter the postfix expression (one token at a time):\n");

    for (int i = 0; i < n; i++) {
        scanf("%s", token);

        if (isdigit(token[0])) {
            // Convert string to integer and push
            push(atoi(token));
        } else if (strlen(token) == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')) {
            int val2 = pop();
            int val1 = pop();

            switch (token[0]) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        } else {
            printf("Invalid token: %s\n", token);
            exit(1);
        }
    }

    printf("Output = %d\n", pop());

    return 0;
}
