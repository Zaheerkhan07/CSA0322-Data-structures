#include<stdio.h>
int main()
{
	int sum=0,first,last,n;
	printf("enter the n value:");
	scanf("%d",&n);
	
	last = n%10;
	first = n;
	while(n>=10)
	{
		
		n=n/10;
	}
	first=n;
	sum=first+last;
	printf("sum of first and last digit is:%d",sum);
	return 0;
}
