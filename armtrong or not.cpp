#include<stdio.h>
#include<math.h>
int main ()
{
	int n,m,ndigit=0,r,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		ndigit++;
		n=n/10;
	}
	n=m;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,ndigit);
		n=n/10;
	}
	if(sum==m)
	{
		printf("Armtrong number\n");
	}
	else
	{
		printf("not an Armtrong number\n");
	}
	return 0;
}
