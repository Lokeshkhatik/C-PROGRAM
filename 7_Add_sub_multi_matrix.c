#include<stdio.h>
#include<conio.h>
#include<math.h>
void Addition( ){
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
         printf("addition of matrix is : \n");
         for(i=0;i<3;i++){
         for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
         printf("\n");
        }
}

void subtraction(){
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
         printf("subtraction of matrix is : \n");
         for(i=0;i<3;i++){
         for(j=0;j<3;j++){
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
         }
         printf("\n");
         }
}
void Multiplication(){
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
    printf("Multiplication of Matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum +=a[i][k]*b[k][j];


            }
            c[i][j] = sum;
            printf("%d\t",c[i][j]);
            sum=0;
        }
        printf("\n");
    }
    
    
    
}
int main(){
    int choice;
    printf("press 1.  TO Addition of matrix \n");
    printf("press 2.  TO subtraction of matrix \n");
    printf("press 3.  TO multiplication of matrix \n");
    printf("Enter Your Choice : ");

    scanf("%d", &choice);
    switch(choice){
        case 1:
        Addition();
        break;

        case 2:
        subtraction();
        break;

        case 3:
        Multiplication();
        break;

        default :
        printf("Invalid input !!!");
        break;
    }

    return 0;
    
}