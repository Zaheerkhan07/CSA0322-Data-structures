#include <stdio.h>
int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("multiplication table of %d",n);
	printf("   ");
	for(i=0;i<=100;i++)
	printf("%d * %d =%d",n,i,n*i);
return 0;
}
