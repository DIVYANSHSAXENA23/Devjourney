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
    
};
class C:public B{
    protected:
    int c;
public:
    get_input(){
        cout<<"enter c";
        cin>>c;
    }
    void display(){
        cout<<"a="<<a;
        cout<<"b="<<b;
        cout<<"c="<<c;
    }

};
int main(){
    C o1;
    o1.getinfo();
    o1.input();
    o1.get_input();
    o1.display();
}