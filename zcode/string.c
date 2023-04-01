#include<stdio.h>
#include<string.h>
int main(){
    // declaration
    char s[30];
    char cs[30];
    
    printf("enter your full name");
    //input
    gets(s);
    //print
    printf("my name is%s\n",s);
    //print another
    for(int i=0;s[i]!='\0';i++)
    {printf("%c",s[i]);}
    //length
   int len=strlen(s);
    printf("length is %d",len);
     //length another way
    int length=0;
    for(int i=0;s[i]!='\0';i++)
    {length++;}
printf("length is %d",length);
//copy (paste,copy)
strcpy(cs,s);
printf("%s\n",cs);
//add
strcat(s,cs);
 printf("%s\n",s);
 strcat(s,cs);
printf("00%s\n",s);

}
