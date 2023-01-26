 //  shortewd array
#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    int arr[5];
    for( int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    for( int i=0;i<n-1;i++){
        for( int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
               int  temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("Shorted array is => ");
    for(int i=0;i<n;i++){
        printf("%d   ", arr[i]);
    }
    return 0;
}