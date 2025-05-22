
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    int i=0;
    int b=0;
    while (i==0){
        int n; 
        cout<<"enter number";
        cin>>n;
        a.push_back(n);
        
        b++;
        cout<<"enter 0 to continue";
        cin>>i;
    }
    for (int i=0;i<b;i++){
        cout<<a[i]<<"\n";
    }
 
   
}