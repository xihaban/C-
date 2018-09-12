#include<stdio.h>
 main()
{
	float i ,n,a=1, sum=0;
	scanf("%f",&n);
  for(i=1;i<=n;i++)
	{
		sum=sum+a/i;
		a=-a;
	}
	printf("sum=%0.4f\n",sum);
}
