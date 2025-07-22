#include<iostream>
using namespace std;
int sec_lar_ele(int arr[] , int n){
    int s_lar=-1;
    int lar = arr[0];
    for(int i=1;i<n;i++){
            if (arr[i]>lar){
                s_lar=lar;
                lar=arr[i];
            }
            else if (arr[i]<lar && arr[i]>s_lar){
                s_lar=arr[i];
            }
        }
        return s_lar;
}
int main(){
        int n;
         cin>>n;
        int arr[n];
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int s_l=sec_lar_ele(arr,n);
        cout<<s_l;
        return 0;
}