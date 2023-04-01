#include<stdio.h>
int main(){
    int a[50][50],b[50][50] ,d[50][50] ;
    int r,c;
    printf("enter row and col");
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++){
            printf("a[%d][%d]=",i+1,j+1); 
            scanf("%d",&a[i][j]);
        }
    } printf("A= ");
    for(int i=0;i<r;i++){
        printf("\t");
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);}
            printf("  \n");}

    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++){
            printf("b[%d][%d]=",i+1,j+1); 
            scanf("%d",&b[i][j]);
        }
    } printf("b= ");
    for(int i=0;i<r;i++){
        printf("\t");
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);}
            printf("  \n");}
 for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++){
             
             d[i][j]=a[i][j]+b[i][j];
        }
    } printf("a+b= ");
    for(int i=0;i<r;i++){
        printf("\t");
        for(int j=0;j<c;j++){
            printf("%d ",d[i][j]);}
            printf("  \n");}
}
