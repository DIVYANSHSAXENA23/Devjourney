#include<iostream>
using namespace std;
template <class T>
class demo{
    private:
        T x,y;
    public:
        demo(T a,T b){
            x=a;
            y=b;
        }
        void sum(){
            cout<<x+y;
        }
};
int main(){
    demo <int> o1(3,4);
    o1.sum();
    return 0;
}
