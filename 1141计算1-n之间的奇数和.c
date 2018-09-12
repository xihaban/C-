#include<stdio.h>
main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		sum+=i;
	}
	printf("%d\n",sum);

}