#include<stdio.h>
main()
{
	int n,sum=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum=sum*i;
	printf("%d\n",sum);
}