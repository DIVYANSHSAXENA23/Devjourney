#include<stdio.h>
void qs(int a[],int low,int high){
  
    int i,j;
    i=low;
    j=high;
    int mid =(low+high)/2;
   
    int pivot =a[mid];
    while (i<=j){
        while (a[i]<pivot) i++;
        while (a[j]>pivot) j--;
        if (i<=j){
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }

    }
    if (low<j){
        qs(a,low,j);
    }
    if (i<high){
        qs(a,i,high);
    }

}
int main(){
    int a[15];
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter elements %d",i);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        
        printf("%d\t",a[i]);
    }
    qs(a,0,n-1);
    for (int i=0;i<n;i++){
        
        printf("%d\t",a[i]);
    }

    

}