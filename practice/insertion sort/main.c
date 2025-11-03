#include<stdio.h>
void ins_sort(int n,int arr[n]){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && (arr[j]<arr[j-1])){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    printf("enter no of element");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ins_sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}