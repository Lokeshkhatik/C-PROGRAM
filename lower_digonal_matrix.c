#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,arr[3][3];
    printf("\nEnter the matrix elements : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\nLower Digonal Mtrix : \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i<j){
                arr[i][j]=0;
            }
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}