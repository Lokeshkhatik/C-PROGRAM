#include<stdio.h>
#include<conio.h>

int perfect(int n){
    int i=1,sum=0,rem,num;
    num=n;
    
    for(i;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
            
        }
       
    } 
    if(sum==num){
        printf("%d is perfect number.",n);
    }
    else{
        printf("%d is not perfect number.",n);
    }

    return 0;

}

int main(){
    int number,x;
    printf("Enter the number \n");
    scanf("%d",&number);
    perfect(number);
    return 0;

}