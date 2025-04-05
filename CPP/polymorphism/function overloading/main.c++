#include<iostream>
using namespace std;
void sum(int x,int y){
    cout<<"x+y=\n "<<x+y;}
void sum(float x,float y){
    cout<<"\n"<<x+y;
}
void sum(int x){
    cout<<"\n"<<x+5;
}
int main(){
    int a=5,b=4;
    float c=5.3,d=4.7;
    sum(a,b);
    sum(c,d);
    sum(a);
    return 0;
}
