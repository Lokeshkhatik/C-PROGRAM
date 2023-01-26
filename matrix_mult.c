#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,k,a[3][3],b[3][3],c[3][3];
    printf("Enter The Matrix Elements OF A Matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter The Matrix Elements OF B Matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum +=a[i][k]*b[k][j];


            }
            c[i][j] = sum;
            sum=0;
        }
    }
    printf("Resulten Matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}