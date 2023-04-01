#include<stdio.h>
int main(){
int a[30][30],b[30][30],c[30][30];
   int r1,c1,r2,c2,sum=0;
   printf("enter row and col of a matrix a");
   scanf("%d%d",&r1,&c1);
   printf("enter row and col of a matrix b");
   scanf("%d%d",&r2,&c2);
   if(c1==r2){
    printf("enter a matrix");
    for(int i=0;i<r1;i++){
        printf("\n");
        for(int j=0;j<c1;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }  printf("\n");

    } printf("enter b matrix");
    for(int i=0;i<r2;i++){
         printf("\n");
        for(int j=0;j<c2;j++){
            printf("b[%d][%d]=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    } printf("A=");
   for(int i=0;i<r1;i++){
    printf("\t");
       
        for(int j=0;j<c1;j++){
            printf("%d ",a[i][j]);
            
       }printf("\n");
       }
       printf("B=");
   for(int i=0;i<r2;i++){
    printf("\t");
       
        for(int j=0;j<c2;j++){
            printf("%d ",b[i][j]);
            
       }printf("\n");
       }
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                sum=sum+a[i][k]*b[k][j];
            }c[i][j]=sum;
             sum=0;}}
         printf("A*B=");    
    for(int i=0;i<r1;i++){
    printf("\t");
       
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
            
       }printf("\n");
       }    
   }
       else{printf(" error!! \n can't perform");}
}
