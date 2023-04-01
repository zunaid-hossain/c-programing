//1-2+3-4+5-6+7-8+9..............n;
#include<stdio.h>
int main (){
    int even=0,n,odd=0,sum=0;
    printf("1-2+3-4+5-6+7-8+9..............n;\nenter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
          even=even+i;
        }
        else{
            odd=odd+i;
        }
      sum=odd-even;
    }
     printf("sum=%d",sum);
}