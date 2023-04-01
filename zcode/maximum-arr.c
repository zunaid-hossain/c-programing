#include<stdio.h>
int main(){
    int arr[30];
    int n,x;
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
            x=arr[1];
        if(arr[i]>x){
            x=arr[i];
        }
    }printf("maximum number is %d",x);
}