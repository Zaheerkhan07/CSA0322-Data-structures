#include<stdio.h>
#include<conio.h>
int main() {
	int i,n;
	clrscr();
	printf("enter the nth element:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",square(i));
		printf("/n");
		getch;
	}
	int square(int y)
	{
		return y*y;
	}
}
