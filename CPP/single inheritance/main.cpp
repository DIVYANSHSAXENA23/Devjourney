#include<iostream>
using namespace std;
class A{
    protected:
        int a;
    public:
        void getinfo(){
            cout<<"enter a";
            cin>>a;
        }
};
class B:public A{
    protected:
        int b;
    public:
        input(){
            cout<<"enter b";
            cin>>b;
        }
    void display(){
        cout<<"a="<<a;
        cout<<"b="<<b;
    }
};
int main(){
    B o1;
    o1.getinfo();
    o1.input();
    o1.display();
}