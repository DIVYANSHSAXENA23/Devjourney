#include<iostream>
using namespace std;
class A{
    public:
        int a;
        void input(){
            cout<<"enter a";
            cin>>a;
        }
        void display(){
            cout<<"a="<<a;
        }
        void operator ++(int){
            a++;
        }
};
int main(){
    A o1;
    o1.input();
    o1.display();
    o1++;
    cout<<"after change"<<o1.a;
    o1.display();
}