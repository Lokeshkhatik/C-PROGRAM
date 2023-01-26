#include<stdio.h>
#include<conio.h>
#include<math.h>

void palindrome(int n){
    int number,rem,rev=0;
    number=n;

    while(n!=0){

        rem = n%10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    if(number==rev){
        printf("y");
    }
    else {
        printf("n");
    }
    
    
    
}

void main(){
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    palindrome(n);
    
    
    
}