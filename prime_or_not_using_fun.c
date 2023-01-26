#include<stdio.h>
#include<conio.h>

int prime();

int main(){
    int n,result;
    printf("Enter the number : ");
    scanf("%d",&n);
    result = prime(n);
    if(result == 1){
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not prime number",n);
    }

    return 0;
}

int prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        
    }
   
    return 1;
}