#include<stdio.h>
main()
{
	int i ,j,g,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
			printf(" ");
		for(g=0;g<i;g++)
			printf("*");
		printf("\n");
	}
}
