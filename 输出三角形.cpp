/*#include<stdio.h>
main()
{
	int i,j,x,f;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{	for(f=i;f<x;f++)
			printf(" ");
		for(j=0;j<2*i-1;j++)
			
			printf("*");
		
		printf("\n");}
}*/#include<stdio.h>
main()
{
	int n,i,j,k;
	scanf("%d",&n);
	if(n>0&&n<20)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=(2*i-1);k++)
				printf("*");
			printf("\n");
		}

	}
	else
		printf("ÄúÊäÈëµÄÊý×Ö´íÎó");
}

