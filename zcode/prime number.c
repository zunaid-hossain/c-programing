#include<stdio.h>
int main(){
 int i=2,n;int a=0;
 printf("enter your number ");
 scanf("%d",&n);
 for(int i;i<=n;i++){
    if(n%i==0){
        a++;
        break;
    }
 }if(a==0){
    printf("prime number ");
 }else  {printf("prime number ");}
}