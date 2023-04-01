#include<stdio.h>
#include<math.h>
int main(){
    int n,ch=0,r,o;
    printf("enter a number ");
    scanf("%d",&n);
    o=n;
    for(;n!=0;){
        r=n%10;
        ch=ch+pow(r,3);
        n=n/10;
        printf("reverse of the number is %d\n",ch);
    }
    printf("reverse of the number is %d\n",ch);
if(o==ch){
    printf("armstrong number");
}
else{ printf("normal numbber ");}}