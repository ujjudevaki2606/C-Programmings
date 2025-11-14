#include<stdio.h>
int main ()
{
	float c,f;
	printf("enter the temperature in celsius");
	scanf("%f",&c);
	f=5*c/9+32;
	printf("enter the temperature fahrenheit f=%.2fF\n",f);
	return 0;
}
