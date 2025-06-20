#include<iostream>
#define n 20
using namespace std;
int stack[n],top=-1;
void push(){
    int i=0;
    while (i==0){

    if (top==20){
        cout<<"stack is full";
    }
    else {
    top+=1;
    cout<<"enter the element to add";
    cin>>stack[top];
    }
    cout<<"enter 0 to enter more elements";
    cin>>i;
}
}
void display(){
    for (int i=top;i>=0;i--){
        if (i==top){
            cout<<stack[i]<<"<-TOP"<<"\n";
        }
        else{
            cout<<stack[i]<<"\n";
        }
    }
}
void peek(){
    if (top==-1){
        cout<<"stack is empty";
    
    }
    else {
        cout<<"topmost element is"<<stack[top]<<"\n";
    }
}
void pop(){
    if (top==-1)
    cout<<"underflow";
    else{
    cout<<stack[top]<<" deleted"<<"\n";
    top--;
}
}

int main(){
    int a;
    int i=0;
    while (i==0){
        cout<<"enter 1: push\nenter 2: pop\nenter 3:peek\nenter 4:display";
        cout<<"enter your choice";
        cin>>a;
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

        cout<<"enter 0 to continue";
        cin>>i;
      
    }
    return 0;
    
}