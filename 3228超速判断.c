#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n<=500){
		if(n>60)
			printf("Speed: %d - Speeding\n",n);
		else
			printf("Speed: %d - OK\n",n);}
}