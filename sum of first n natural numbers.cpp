#include<stdio.h>
int main ()
{
	int n,i=1,pro=1;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
	   pro=pro*i;
	   i++;
	}
	printf("pro=%d\n",pro);
	return 0;
}
