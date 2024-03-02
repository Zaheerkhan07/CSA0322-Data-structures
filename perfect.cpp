#include<stdio.h>
int main()
{
	int n,i,j=0;
	printf("enter the value");
	scanf("%d",&n);
	for(i=1;i<100;i++)
	{
		if(n%i==0)
		{
			j++;
			
		}
	}
	if(j==2)
	{
		printf("%d is a prime number",n);
	}
		else
		{
		
		printf("%d is a not prime number",n);
	}
		
	}
