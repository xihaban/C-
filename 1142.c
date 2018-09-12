#include<stdio.h>
main()
{
	double sum=0,n,i;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1/i;
	}
	printf("%lf\n",sum);

}