#include<stdio.h>
int main()
{ int n,a,e,f;int c=n;int b=a;
printf("enter two numbers ");
scanf("%d%d",&n,&a);

for(;a!=0;){
    f=n%a;
    n=a;
    a=f;

}printf("gcd=%d\n",n);
printf("lcm= %d\n",((b*c)/n));
    }