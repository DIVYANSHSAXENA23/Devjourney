/*Create a class Converter that overloads a function convert() to:
Convert Celsius to Fahrenheit

Convert kilometers to miles

Convert hours to minutes

Convert integer to binary (as a string)*/
#include<iostream>
using namespace std;
class Converter{
    public:
        int c;
        void convert(int f){
            c=(5/9)*f-32;
            cout<<"in celcius is"<<c;
        }
        float m;
        void convert(float a){
            m=a/1.609;
            cout<<"in miles is"<<m;
        }
        int min;
        void convert(int a){
            min=a*60;
            cout<<"in minutes is"<<min;
        }
};
int main(){
    Converter o1;
    o1.convert(32);
    o1.convert(300.00);
    o1.convert(3);
}
