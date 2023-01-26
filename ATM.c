#include<stdio.h>
#include<conio.h>
int main(){
	int x,y;
	char ch;
	printf("Enter The initial Amount : ");
	scanf("%d",&x);
	printf("\nEnter B for balence check \nC for credit Amount in Account \n D for dabit Amount in Account \n");
	scanf("%s",&ch);
	switch(ch){
		case 'B':
			printf("initail balence is = %.2d",x);
			break;
		case 'C':
			printf("Enter the amount to credit in your account : ");
			scanf("%f",&y);
			x=x+y;
			printf("your new balence is = %.2d",x);
			break;
		case 'D':
			printf("Enter Amount you dabit : ");
			scanf("%d",&y);
			if(x>=y){
				x=x-y;
				printf("your new balence is = %.2d",x);
				break;
			}
			else{
				printf("Insufficiant balence in your Account !!! ");
				break;
			}
		default:
			printf("choose correct option !!!");
			break;
	}
	
	return 0;
}