/*Overload the == operator to compare two Time objects (with hours, minutes, and seconds).
Input: Two time values
Output: Whether they are equal or not*/
#include<iostream>
using namespace std;
class time{
    public:
        int hour,min,sec;
        time(int h,int m,int s){
            hour=h;
            min=m;
            sec=s;
        }
        bool operator ==(time t3){
            if ((hour==t3.hour) && (min==t3.min) && (sec==t3.sec))
                return true;
            
            else
                return false;
        }
};
       
     
int main(){
    time o1(3,23,32);
    time o2(3,23,32);
    if (o1==o2){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    
}