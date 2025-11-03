#include<stdio.h>
void merge(int arr[],int lb,int mid,int ub){
    int b[20];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while (i<=mid && j<=ub){
        if (arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
        }
        else {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    while (i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    while (j<=ub){
        b[k]=arr[j];
        j++;
        k++;
    }
    for (int x=lb;x<=ub;x++){
        arr[x]=b[x];
    }
}
    
void merge_sort(int arr[],int lb,int ub){
    if (lb<ub){
        int mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int main(){
    int n;
    printf("enter elements");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}