#include<iostream>
using namespace std;
class demo{
    public:
    int a;
    void input(){
        cout<<"enter a:";
        cin>>a;
    }
    void display(){
        cout<<"a="<<a;
    }
    demo operator +(demo bb){
        demo cc;
        cc.a=a+bb.a;
        return cc;
    }
};
int main(){
    demo aa,bb,cc;
    aa.input();
    bb.input();
    cc=aa+bb;
    cc.display();
}