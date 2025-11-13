#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,2,3,4,5,6,8,9,10};
    int i=0;
    int j=8;
    
    int a;
    printf("enter element to find");
    scanf("%d",&a);
    bool flag=false;
    while (i<=j){
        int mid =(i+j)/2;
    if (a==arr[mid]){
        printf("element found at index %d",mid);
        flag=true;
        break;
    }
    else if (a<arr[mid]) j=mid-1;
    
    else i=mid+1;
}
if (flag==false){
    printf("element not found");
}
    return 0;
}