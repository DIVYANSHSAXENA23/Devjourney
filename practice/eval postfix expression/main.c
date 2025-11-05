#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stack[50];
int top = -1;

void push(int x)
{
    top = top + 1;
    stack[top] = x;
}

int pop()
{
    int x;
    x = stack[top];
    top = top - 1;
    return x;
}

int main()
{
    char exp[50];
    int i;
    int a;
    int b;
    int result;

    printf("Enter postfix expression (no spaces): ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(isdigit(exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            b = pop();
            a = pop();

            if(exp[i] == '+') result = a + b;
            else if(exp[i] == '-') result = a - b;
            else if(exp[i] == '*') result = a * b;
            else if(exp[i] == '/') result = a / b;

            push(result);
        }
    }

    printf("Result = %d\n", pop());

    return 0;
}
