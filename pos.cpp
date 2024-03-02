#include<stdio.h>
int main()
{
	int n;
	printf("enter any integer:");
	scanf("%d",&n);
	
	if(n>0) {
		printf("it is a positive number");
  }
	else if(n<0){
		printf("it is a negative number");
	}
	else if (n=0){
		printf("the number is zero");
	}
	else{
		printf("invalid input number");
	}
}

