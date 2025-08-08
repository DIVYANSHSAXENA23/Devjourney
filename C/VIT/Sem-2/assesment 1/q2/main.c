#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Stack declaration
char stack[MAX];
int top = -1;

// Push function
void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    } else {
        printf("Stack overflow\n");
    }
}

// Pop function
char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';  // Empty stack
}

// Function to check matching brackets
int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

// Function to check if expression is balanced
int isBalanced(char *expr) {
    top = -1;  // Reset stack

    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];

        if (c == '(' || c == '[' || c == '{') {
            push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            char topChar = pop();
            if (!isMatchingPair(topChar, c)) {
                return 0;  // Not matched
            }
        }
    }

    return top == -1;  // True if stack is empty
}

// Main function
int main() {
    char expr[MAX];

   
    scanf("%s", expr);

    if (isBalanced(expr)) {
        printf(" True\n");
    } else {
        printf(" False\n");
    }

    return 0;
}
