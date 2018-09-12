#include<stdio.h>
main()
{
	int n,i,k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
	k=n;
		
	for(i=0;i<n-2;i++)
	{
		for(k=n;k>2+i;k--)	
		{printf(" ");}
		printf("*\n");
	}
	for(i=0;i<n;i++)
		printf("*");
	printf("\n");
	
	
}