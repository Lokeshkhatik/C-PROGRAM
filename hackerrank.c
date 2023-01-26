#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a[5]);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a[5] ,i;
    scanf("%d\n",&n);
    for(i=0;i<5;i++){
        scanf("%d",a[i]);
        
    }
    sum( a);
       
    return 0;
}
int sum(int a[5]){
    int i;
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
}