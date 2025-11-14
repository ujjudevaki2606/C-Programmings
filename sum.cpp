#include<stdio.h>
int main ()
{
	int i,n,sum = 0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		sum = sum + i;
	}
	printf("the sum of n numbers = %d",sum);
	return 0;
}
