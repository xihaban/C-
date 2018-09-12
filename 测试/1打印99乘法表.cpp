#include<stdio.h>
main()
{
	int i,j;
	printf("%c",'*');
	for(i=1;i<=9;i++)
		printf("%5d",i);
	printf("\n");
	printf("\n");
	for(i=1;i<=9;i++)
	{
		printf("%d",i);
		for(j=1;j<=i;j++)
			printf("%5d",i*j);
		printf("\n");

	}
}
