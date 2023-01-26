#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,a[3][3],b[3][3],c[3][3];
    
    printf("Enter the elements of A matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of B matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("resulten matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
}