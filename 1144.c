#include<stdio.h>
main()
{
	double sum=1,n,i;
	scanf("%lf",&n);
	for(i=2;i<=n;i++)
	{
		sum=sum-1/(i*i);
	}
	printf("%lf\n",sum);

}