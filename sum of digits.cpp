#include<stdio.h>
int main()
{
	int i,sum=0,n,m;
	printf("enter the n value:");
	scanf("%d",&n);
	
	while(n>14)
	{
		m=n%10;
		sum=sum+m;
		n/=10;
	}
	printf("sum of digits is %d",sum);
}
