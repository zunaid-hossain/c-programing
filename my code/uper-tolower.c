#include<stdio.h>
int main(){
    char b; char a;
    printf("enter a upper case letter-");
    scanf("%c",&b);
    printf("enter lower case char");
    scanf(" %c",&a);
    printf("the lower case of the letter is %c\n",b+32);
    printf("The upercase of the letter is %c\n",a-32);
}