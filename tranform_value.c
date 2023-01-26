#include<stdio.h>
int main(){
    int a,b,c;
    a=5;
    b=6;
    c=a+b;
    a=b;
    b=c;
    c=a;
    printf("%d ",c);
    return 0;

}