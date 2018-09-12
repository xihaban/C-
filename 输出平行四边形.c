#include <stdio.h>
void main ()
{
	int i ,j ,k,n;
		scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
	for(j=1;j<=i-1;j++)
		printf(" ");
	for(k=1;k<=n;k++)
		printf("*");
	printf("\n");
	}

}