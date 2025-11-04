#include<stdio.h>
void qs(int arr[],int low , int high){
    int i=low;
    int j=high;
    int mid =(low + high)/2;
    int pivot = arr[mid];
    while (i<j){
        while (arr[i]<pivot) i++;
        while (arr[j]>pivot) j--;
        if (i<=j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        } 
    }
    if (low<j){
        qs(arr,low,j);
    }
    if (i<high){
        qs(arr,i,high);
    }
}
int main(){
    int n;
    printf("enter elements no");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qs(arr,0,n-1);
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}