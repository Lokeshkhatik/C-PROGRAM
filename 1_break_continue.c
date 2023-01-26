#include<stdio.h>
int main(){
    int no,i,a[10];
    printf("Enter the no you not print in array :");
    scanf("%d", &no);
    for(i=0;i<10;i++){
        if(a[i]==no){
            continue;

        printf("%d",a[i]);    
        }
        
    }
    return 0;

}