#include<stdio.h>
int main(){
    
    int arr[]={12,10,34,45};
    int value;
    int pos=-1;
    printf("enter the value");
    scanf("%d",&value);
    for(int i=0;i<=5;i++){
        if(value==arr[i]){
            pos=i+1;
            break;
        }
    }
    if(pos!=-1)printf("found and position is %d",pos);
    else printf("not found");
}