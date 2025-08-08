#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// Stack structure
char stack[MAX];
int top = -1;

// Push to stack
void push(char ch) {
    if (top < MAX - 1)
        stack[++top] = ch;
}

// Pop from stack
char pop() {
    if (top != -1)
        return stack[top--];
    return -1;
}

// Peek top of stack
char peek() {
    if (top != -1)
        return stack[top];
    return -1;
}

// Check precedence of operators
int precedence(char op) {
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

// Check if character is operator
int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

// Convert infix to postfix
void infixToPostfix(char* infix) {
    char postfix[MAX];
    int i = 0, k = 0;
    char ch;

    while ((ch = infix[i++]) != '\0') {
        if (isalnum(ch)) {
            postfix[k++] = ch; // Operand goes directly to postfix
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (peek() != '(') {
                postfix[k++] = pop();
            }
            pop(); // remove '(' from stack
        }
        else if (isOperator(ch)) {
            while (isOperator(peek()) && 
                   ((precedence(ch) < precedence(peek())) ||
                    (precedence(ch) == precedence(peek()) && ch != '^'))) {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0'; // Null-terminate the postfix expression
    printf("Postfix: %s\n", postfix);
}

// Main function
int main() {
    char infix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix);

    return 0;
}
