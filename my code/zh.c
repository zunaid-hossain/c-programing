#include<stdio.h>
int main(){
int a[30][30],b[30][30],c[30][30];
   int r1,c1,r2,c2;
   printf("enter row and col of a matrix a");
   scanf("%d%d",&r1,&c1);
   printf("enter row and col of a matrix b");
   scanf("%d%d",&r2,&c2);
   if(c1==r2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<=c1;j++){
            printf("[%d][%d]",i+1,j+1);
            scanf("%d",&a[r1][c1]);
        }
    }
   }
}
