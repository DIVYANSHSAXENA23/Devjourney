#include<stdio.h>
void bub_sort(int n,int arr[n]){
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bub_sort(n,arr);
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}