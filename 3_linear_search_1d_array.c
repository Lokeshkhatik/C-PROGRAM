#include<stdio.h>
#include<conio.h>

int main(){
    int i,a[5],n;
    printf("Enter The Elements of array : ");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter The number You Want to be check : ");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(a[i] == n){
            printf("The Search Element is  Present %d position of array . ",i+1);
        }
    }
    return 0;
}
