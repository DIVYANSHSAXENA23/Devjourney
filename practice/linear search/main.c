#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n;
    printf("enter element to search");
    scanf("%d",&n);
    int c=0;
    for (int i=0;i<6;i++){
        if (arr[i]==n){
            printf("element found at %d",i);
            c++;
            break;
        }
    }
        if(c==0){
            printf("element not found");
        }
    
}