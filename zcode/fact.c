#include<stdio.h>
int main ()
{int a,i,fact=1;
    printf("enter the number of factorial");
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        fact=i*fact;
        
    }printf("the result is %d",fact);
}