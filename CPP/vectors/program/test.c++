#include<iostream>
#include<vector>
using namespace std;
struct record{
    string name;
    int age;
    int match_played;
};
record most(vector <record> &b){
    record max=b[0];
    for (const auto &record:b){
        if (record.match_played>max.match_played){
            max=record;
        }
    }
    return max;
}

int main(){
    int p;
    cout<<"enter no of record to get stored";
    cin>>p;
    vector<record> a;
    for (int i=0;i<p;i++){
        struct record p1;
        cout<<"enter name ";
        cin>>p1.name;
        cout<<"enter age";
        cin>>p1.age;
        cout<<"mathches played";
        cin>>p1.match_played;
        a.push_back(p1);
    }
    struct record r1=most(a);
    cout<<"most matches is played by"<<r1.name;
    
 

}