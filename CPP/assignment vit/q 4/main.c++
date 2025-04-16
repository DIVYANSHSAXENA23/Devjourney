/*Create an abstract class MathSymbol may provide a pure virtual function
doOperation(), and create two more classes Plus and Minus implement
doOperation() to provide concrete implementations of addition in Plus class and
subtraction in Minus class. */
#include<iostream>
using namespace std;
class  MathSymbol{
    public:
    virtual int doOperation(int a, int b)=0;

};
class Plus:public MathSymbol{
    public:
    int doOperation(int a,int b){
        return a+b;
    }
};
class Minus:public MathSymbol{
    public:
    int doOperation(int a,int b){
        return a-b;
    }
};
int main(){
    int num1,num2;
    cout<<"enter number 1 and number 2: \n";
    cin>>num1>>num2;
    Plus Addition;
    Minus Subtraction;
    cout<<"Addition of number 1 and number 2 is: "<<Addition.doOperation(num1,num2)<<endl;
    cout<<"Subtraction of number 1 and number 2 is: "<<Subtraction.doOperation(num1,num2)<<endl;

}

