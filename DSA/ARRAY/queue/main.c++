#include<iostream>
#define n 20
using namespace std;
int queue[n],rear=-1;
void enqueue(){
    int i=0;
    while (i==0){
    if (rear==20){
        cout<<"queue is full";
    }
    else{
        cout<<"enter element to add in queue :\n";
        cin>>queue[++rear];
    }
    cout<<"enter 0 to continue";
    cin>>i;
}
}
void traversal(){

    for (int i=0;i<=rear;i++){
        if (i==0){
            cout<<"FRONT -> "<<queue[i]<<"\t";
        }
        else if(i==rear) {
            cout<<queue[i]<<"<- REAR";
        }
        else{
            cout<<queue[i]<<"\t";
        }

        
    }
}
void dequeue(){
    int i=0;
    if (rear==-1)
    cout<<"queue is empty";
    else{
        for(int i=0;i<rear;i++)
        queue[i]=queue[i+1];
        rear--;
        
    }
}


int main(){
    int i=0;
    while(i==0){
    int choice;
    cout<<"enter 1 : enqueue\n enter 2: dequeue\n enter 3: traversal";
    cin>>choice;
    if (choice==1){
        enqueue();
    }
    if (choice==2){
        dequeue();
    }
    if (choice==3){
        traversal();
    }
    cout<<"enter o to continue";
    cin>>i;
    }
    return 0;
}