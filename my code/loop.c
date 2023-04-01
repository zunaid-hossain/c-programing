# include<stdio.h>
int main(){
    int a,i=0;   
     printf("chosse your loop\n 1-for \n 2-while\n 3-do while\n");
     scanf("%d",&a);
     switch(a){
    for(i=1;i<100;i+=4)   //initialization;condition;increment
     {
         printf("zoha 1\n");
     }break;
     case 2:
    while(i<5){
        printf("zunaid\n");
        i++;
    } break;
     case 3:
     do{
       printf("hossain\n");
       i+=4;
    }while(i<100);
    break;
    default :printf("not a loop");}
}

