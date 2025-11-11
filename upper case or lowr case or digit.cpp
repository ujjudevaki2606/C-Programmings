#include<stdio.h>
int main ()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("upper case\n");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("lower case\n");
	}
	else if (ch>='0'&&ch<='9')
	{
		printf("digit");
	}
	else 
	{
		printf("not a digit and not an alphabet\n");
	}
	return 0;
}
