#include<stdio.h>
int main(){
    int first=1,second=1,fibo,n,co=0;
    printf("enter the range ");
    scanf("%d",&n);
    for(;co<n;co++){
        if(co<=1){
            fibo=co;
        }else{//when we only use this part it will print from 2
        //so we use the condition
        fibo=first+second;
        first=second;
        second=fibo;}
        printf(" %d ",fibo);
    }
}