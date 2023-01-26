#include<stdio.h>
#include<conio.h>

int main(){
    int min,max,n,i,arr[50];
    printf("Enter The Number Of Elements In Array :  ");
    scanf("%d", &n);
    printf("Enter The Elements Of Array : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("\nElements Of Array : \t");
    for(i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    printf("\n\nSmallest Element Of Array : %d \n",min);
    printf("Largest Element Of Array : %d \n\n",max);
    return 0;

}