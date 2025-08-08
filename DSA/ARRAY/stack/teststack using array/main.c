#include<stdio.h>
#define n 5
int stack[n];
int top=-1; 
void push(){
    if (top==n-1) printf("stack overflow");
    else {
        top++;
        int x;
        printf("enter the element to push");
        scanf("%d",&x);
        stack[top]=x;
    }
}
void pop(){
    if (top==-1) printf("stack underflow");
    else {
        printf("popped element is %d",stack[top]);
        top--;
    }
}
void peek(){
     if (top==-1) printf("stack  is empty");
     else {
        printf("%d" ,stack[top]);
     }
}
void display(){
    if (top==-1) printf("stack  is empty");
    else {
        for (int i=top;i>=0;i--){
            printf("%d ", stack[i], );
        }
    }
}
int main(){
    int a;
    //printf("enter case");
    //scanf("%d",&ch);
    int i=0;
    /*while (i==0){
    switch (ch)
    {
    case 1:
         push();
        break;
        case 2:
         pop();
         break;
        case 3:
       peek();
       break;
        case 4: 
         display();
         break;
    default:
        printf("invalid choice");
    }
    printf("enter 0 to continue");
    scanf("%d",&i);
}*/
        while (i==0){
        printf("enter 1: push\nenter 2: pop\nenter 3:peek\nenter 4:display");
        scanf("%d",&a);
        
        if (a==1){
            push();
        }
        if (a==2){
            pop();
        }
        if (a==3){
            peek();
        }
        if (a==4){
            display();
        }

    printf("enter 0 to continue");
        scanf("%d",&i);
    }
    return 0;
}