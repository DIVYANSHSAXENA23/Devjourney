#include<bits/stdc++.h>
using namespace std;
void sel_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if (arr[j]<arr[min]){
                min=j;
            }

        }
        /*int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;*/
        swap(arr[min],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sel_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}