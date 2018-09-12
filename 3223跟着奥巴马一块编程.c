#include<stdio.h>
main()
{
	char a;
	int n,i,j;
	scanf("%d %c",&n,&a);
	for(i=0;i<n;i++)
		printf("%c",a);
	for(j=0;j<((n+1)/2)-2;j++)
	{
		printf("\n");
		printf("%c",a);
		for(i=0;i<n-2;i++)
		printf(" ");
		printf("%c",a);
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%c",a);
}