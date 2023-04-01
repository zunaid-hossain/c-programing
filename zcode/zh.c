#include<stdio.h>
int main(){
int a[30][30],b[30][30],c[30][30];
   int r1,c1,r2,c2;
   printf("enter row and col of a matrix a");
   scanf("%d%d",&r1,&c1);
   printf("enter row and col of a matrix b");
   scanf("%d%d",&r2,&c2);
   if(c1==r2){
    printf("enter a matrix");
    for(int i=0;i<r1;i++){
        printf("\n");
        for(int j=0;j<c1;j++){
            printf("a[%d][%d]",i+1,j+1);
            scanf("%d",&a[r1][c1]);
        }  printf("\n");
printf("enter b matrix");
    } for(int i=0;i<r2;i++){
         printf("\n");
        for(int j=0;j<c2;j++){
            printf("b[%d][%d]",i+1,j+1);
            scanf("%d",&b[r2][c2]);
        }
    } printf("a=");
   for(int i=0;i<r1;i++){
    printf("\t");
        for(int j=0;j<c1;j++){
            printf("%d",a[i][j]);
       }}}
       else{printf(" error!! \n can't perform");}
}
