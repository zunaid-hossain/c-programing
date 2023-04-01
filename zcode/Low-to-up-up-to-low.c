#include<stdio.h>
#include<ctype.h>
int main(){
    char a,b,c,l;
    printf("enter a lower case char ");
    scanf("%c",&l);
    b=toupper(l);
    printf("the upper case char is %c\n",b);
    printf("Now enter a upper case char");
    scanf(" %c",&a);
    c=tolower(a);
    printf("the lower case char is %c\n",c);
}