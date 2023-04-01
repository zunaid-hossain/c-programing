#include<stdio.h>
int main(){
    int fibo[100];
    int n;
    printf("enter fibo number ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        fibo[0]=0;
        fibo[1]=1;
        fibo[i]=fibo[i-2]+fibo[i-1];

    }  for(int i=0;i<n;i++){
        printf("%d ",fibo[i]);}
}