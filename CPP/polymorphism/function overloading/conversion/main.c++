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
        void convert(float f){
            c=(5/9)*f-32;
            cout<<"in celcius is"<<c<<"\n";
        }
        float m;
        void convert(double a){
            m=a/1.609;
            cout<<"in miles is"<<m<<"\n";
        }
        int min;
        void convert(int a){
            min=a*60;
            cout<<"in minutes is"<<min<<"\n";
        }
};
int main(){
    Converter o1;
    float a=32;
    double b=300;

    o1.convert(a);
    o1.convert(b);
    o1.convert(3);
}
