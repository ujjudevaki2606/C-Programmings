#include<stdio.h>
#include<math.h>
int main ()
{
	float p,t,r,CI,SI;
	printf("enter principle amount:");
	scanf("%f",&p);
	printf("enter time period");
	scanf("%f",&t);
	printf("enter rate of interset");
	scanf("%f",&r);
	SI=p*t*r/100;
	CI=p*pow(1+r,t);
	printf("simple interset=%.2f\n",SI);
	printf("compound interset=%.2f\n",CI);
	return 0;
}
