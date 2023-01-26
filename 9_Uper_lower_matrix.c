#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,arr[3][3],b[3][3];
    printf("Enter The Matrix elements : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            b[i][j]=arr[i][j];
        }
        printf("\n");
    }
    
    printf("\nLower Diagonal Matrix Is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i<j){
                arr[i][j]=0;
            }
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nUper Diagonal Matrix Is  : \n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i>j){
                b[i][j]=0;
            }
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    return 0;

}



