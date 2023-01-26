#include<stdio.h>
#include<conio.h>
int main(){

    int i,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%2==0){
            printf("\t%d",i);
        }
        
    }
    return 0;
}