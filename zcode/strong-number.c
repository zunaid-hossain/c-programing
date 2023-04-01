#include<stdio.h>
int main(){
    int n,ch=0,r,o;
    printf("enter a number ");
    scanf("%d",&n);
    o=n;
    for(;n!=0;){
        r=n%10;
int fact=1;
        for(int i=1;i<=r;i++){
            fact=fact*i;
             
        }
        ch=ch+fact;
        n=n/10;
        printf("cheeking of the number is %d\n",ch);
    }
    printf("cheeking of the number is %d\n",ch);
if(o==ch){
    printf("strong number");
}
else{ printf("normal numbber ");}}