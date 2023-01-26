// print matrix 2d array print .....
#include<stdio.h>
int main()
{
	int a[3][3] ;
	int i,j;
	printf("Enter the elements of array :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&a[i][j]);
		}
		printf("\n");
	}
	printf("matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d ",a[i][j]);
		}
		printf("\n");
	}
   
	return 0;
}