#include<stdio.h>
int main()
{ int a,sum=0,rev=0,r;
 
  printf("enter your number ");
  scanf("%d",&a);
  int n=a,re=r;
  for(int i=0;a!=0;i++){
      r=a%10;
      sum=sum+r;
      a=a/10;
  }
  printf("sum of digits =%d\n",sum);
  for(int i=0;n!=0;i++){
      re=n%10;
      rev=rev*10+re;
      n=n/10;}
      printf("rev of digits =%d",rev);

}