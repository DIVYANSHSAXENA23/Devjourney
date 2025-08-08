#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    bool flag=false;
    cout<<"enter element to find out :";
    cin>>n;
    int first =0;
    int last=9;
    int mid;
    while (first<=last){
        mid=(first +last)/2;
        if (n==arr[mid]){ cout<<"inedex at which element is found : "<<mid;
            flag=true;
            break;}

        else if(n<arr[mid]) last=mid-1;
        else first=mid+1;
    }
    if (flag==false) cout<<"element not found";
    return 0;
}