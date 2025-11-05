#include <stdio.h>
#include <ctype.h>

char stack[50];
int top = -1;

void push(char x)
{
    top = top + 1;
    stack[top] = x;
}

char pop()
{
    char x;
    x = stack[top];
    top = top - 1;
    return x;
}

int precedence(char x)
{
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char infix[50];
    char postfix[50];
    int i;
    int j;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    i = 0;
    j = 0;

    while(infix[i] != '\0')
    {
        if(isalnum(infix[i]))
        {
            postfix[j] = infix[i];
            j = j + 1;
        }
        else
        {
            while(top != -1 && precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j] = pop();
                j = j + 1;
            }
            push(infix[i]);
        }

        i = i + 1;
    }

    while(top != -1)
    {
        postfix[j] = pop();
        j = j + 1;
    }

    postfix[j] = '\0';

    printf("Postfix: %s\n", postfix);

    return 0;
}
