#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	table:
		printf("%dX%d=%d\n",n,i,n*i);
		i++;
		if(i<=10)
		goto table;
		return 0;
	}
		
