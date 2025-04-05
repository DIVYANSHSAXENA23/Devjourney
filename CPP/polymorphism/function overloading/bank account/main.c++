#include<iostream>
using namespace std;
class bankaccount{
    private:
        float amount;
    public:
        bankaccount(int a){
            amount=a;
        }
        void deposit(int a){
            amount+=a;
        }
        void deposit(float a,string msg){
            amount+=a;
            cout<<"\n"<<msg;
        }
        void display(){
            cout<<"\nbalance is"<<amount;

        }
};
int main(){
    bankaccount o1(5000);
    int a=500;
    o1.deposit(a);
    o1.display();
    float b=500.00;
    o1.deposit(b,"amount credited");
    o1.display();
    
}