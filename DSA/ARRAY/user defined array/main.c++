#include<iostream>
using namespace std;
int main(){
    int a[5];
    
    for (int i=0;i<5;i++){
        cout<<"enter element :";
        cin>>a[i];
    }
    for (int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}