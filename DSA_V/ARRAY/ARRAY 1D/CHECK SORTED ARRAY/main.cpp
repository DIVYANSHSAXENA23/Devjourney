#include<iostream>
#include<vector>
using namespace std;
bool che_sor(const vector <int>& arr, int n){
    for(int i=1;i<n;i++){
            if (arr[i-1]>arr[i]){
                return false;
            }
           
        }
        return true;
}
int main(){
        int n;
         cin>>n;
        vector <int> arr(n);
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=che_sor(arr,n);
        cout<<l;
        return 0;
}