#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("enter the element ");
    scanf("%d",&n);
    int first=0;
    int last=9;
    bool flag=false;
    while (first<=last){
        int mid = (first+last)/2;
        if (n==arr[mid]){
            printf("elemenet found at %d", mid);
            flag=true;
            break;
        }
        else if (n<arr[mid]) last=mid-1;
        else first=mid+1;
    }
    if (flag==false){
        printf("element not found at current position");
    }
}