#include<stdio.h>
#include<conio.h>

int main(){
    int i,a[3];
    printf("Enter The Matrix Elements : ");
    for (i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    printf("Matrix Elements is : ");
    printf("[");
    for (i=0;i<3;i++){
        
        printf("  %d  ",a[i]);
        
    }
    printf("]");


    return 0;
}