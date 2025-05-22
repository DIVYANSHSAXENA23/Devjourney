#include<iostream>
using namespace std;
template <class T1,class T2>
T1 sum(T1 a,T2 b){
    cout<<"\n"<<a+b;
}
int main(){
    sum(3,7.6);
}