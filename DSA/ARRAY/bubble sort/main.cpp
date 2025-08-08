#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,4,2,6,8,5};
    int i,j;
    for (i=0;i<6;i++){
        for(j=1;j<6;j++){
            if (arr[j]<arr[j-1])// swap(arr[j],arr[j-1]);
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            
        }

    }
    for(i=0;i<6;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}