#include<stdio.h>
int main(){
//series 
//1x2+2x3+3x4+4x5+........+nx(n-1)
int a=1,b=2,sum=0,n,N;
printf("1x2+2x3+3x4+4x5+........+nxN\n");
printf("enter n and N");
scanf("%d%d",&n,&N);
for(;a<=n&&b<=N ;b++,a++){
    sum=sum+a*b;  
}
printf("summation is %d",sum);
}