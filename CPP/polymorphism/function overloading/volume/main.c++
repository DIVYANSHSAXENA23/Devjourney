#include<iostream>
using namespace std;
class Volume{
    public:
        int v;
        void compute(int a){
            v=a*a*a;
            cout<<v<<"\n";
        }
        void compute(float a,float b){
            v=(4/3)*3.14*(a*a)*b;
            cout<<v<<"\n";
        }
        void compute(int a,int b,int c){
            v=a*b*c;
            cout<<v;
        }
};
int main(){
    Volume o1;
    int a=3,d=4,e=5;
    float b=3.5,c=7.5;
    o1.compute(a);
    o1.compute(b,c);
    o1.compute(a,d,e);

}