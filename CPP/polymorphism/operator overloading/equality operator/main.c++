/*Overload the == operator to compare two Time objects (with hours, minutes, and seconds).
Input: Two time values
Output: Whether they are equal or not*/
#include<iostream>
using namespace std;
class time{
    public:
        int a,b,c;
        void input(){
            cout<<"enter a,b,c";
            cin>>a,b,c;
            
        }
    void operator ==(int,int,int){

    }
};
void main(){
    time o1;
    o1.input()
    
}