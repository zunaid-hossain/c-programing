#include<stdio.h>
int main(){
    int a;
printf("enter a year ");
scanf("%d",&a);
if(a%400==0){// if er por semicolon dile error
printf("\tleap year");}
else if (a%4==0 && a%100!=0)
{printf("\nleap year");}

else printf("not a leap year");

}