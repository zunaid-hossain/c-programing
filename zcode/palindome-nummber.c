#include<stdio.h>
int main(){
    int n,rev=0,r,o;
    printf("enter a number ");
    scanf("%d",&n);
    o=n;
    for(;n!=0;){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse of the number is %d\n",rev);
if(o==rev){
    printf("palindrome number");
}
else{ printf("normal numbber ");}}