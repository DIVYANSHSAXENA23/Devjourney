#include<iostream>
using namespace std;
class A{
    public:
virtual void show(){
    cout<<"a print hua";
}
};
class B:public A{
    public:
    void show(){
        cout<<"b  print hua";
    }
};
int main(){
    A *ptr, o1;
    B o2;
    ptr= &o2;
    ptr->show();
    return 0;
}
