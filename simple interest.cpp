#include<stdio.h>
int main()
{
	float principal,rate,time,simple_interest;
	printf("enter the principal amount:");
	scanf("%f",&principal);
	printf("enter the rate:");
	scanf("%f",&rate);
	printf("enter the time period:");
	scanf("%f",&time);
	
	simple_interest = (principal*rate*time/100);
	
	printf("simple_interest = %.2f\n",simple_interest);
	return 0;
}
