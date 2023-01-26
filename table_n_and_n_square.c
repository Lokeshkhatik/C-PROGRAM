#include<stdio.h>
#include<conio.h>
#include<math.h>

void table(int x){
    int i,table=1, power=1;

    for(i=1;i<=10;i++){
        table=x*i;
        power=pow(table,2);
        printf("%d * %d = %d \t %d * %d = %d\n",x,i,table,table,table,power);

    }

}

int main(){
    int number , result_a,return_b;
    printf("Enter the no. : \n");
    scanf("%d",&number);

     table(number);
    printf("%d",result_a);

    return 0;
}