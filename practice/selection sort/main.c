#include<stdio.h>
void sel_sort( int n,int arr[n]){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min]) min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main(){
    int n;
    printf("enter no of elements");
    scanf("%d",&n );
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sel_sort(n,arr);
     for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}