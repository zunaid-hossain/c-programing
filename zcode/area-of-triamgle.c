#include<stdio.h>

int main(){
    double a,b,c,s,area;
    printf("enter the 3 value");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
     printf("area is%lf",area);
     }