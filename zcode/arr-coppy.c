#include<stdio.h>
int main(){
    int arr1[30],arr2[30],n;
    printf("how nany number you need ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        printf(" %d",arr1[i]);}
    for(int i=0;i<n;i++){
        arr2[i]= arr1[i];
        printf("\n%d",arr2[i]);
    }
}