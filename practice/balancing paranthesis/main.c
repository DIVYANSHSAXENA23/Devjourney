#include <stdio.h>

char stack[50];
int top = -1;

void push(char x)
{
    top = top + 1;
    stack[top] = x;
}

char pop()
{
    top = top - 1;
    return stack[top + 1];
}

int main()
{
    char exp[50];
    int i;
    int flag;

    printf("Enter expression: ");
    scanf("%s", exp);

    flag = 1;

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(top == -1)
            {
                flag = 0;
                break;
            }
            pop();
        }
    }

    if(top != -1)
    {
        flag = 0;
    }

    if(flag == 1)
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Not Balanced\n");
    }

    return 0;
}
