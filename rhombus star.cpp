#include<stdio.h>
int main()
{
	int rows,i,j,space;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<-rows;i++)
	{
		for(space=0;space<=rows-i;space++) {
			printf(" ");
		}
		for(j=1;j<=rows;j++) {
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
