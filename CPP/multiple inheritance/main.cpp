#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"a called\n";
        }
};
class B{
    public:
        B(){
            cout<<"b called\n";
        }
};
class C:public A,public B{
    public:
        C(){
            cout<<"c called";
        }
};
int main(){
    C o1;
}