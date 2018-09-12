#include<stdio.h>
main()
{
	double n, sum;
	scanf("%lf",&n);
	if(n-(int)n>0)
		n=(int)n+1;
	else 
		n=(int)n;
	if(n<=2)
	{
		sum=7;
		printf("%0.6lf\n",sum);
	}
	else if(n<=15)
	{
		sum=7+(n-2)*1.5;
		printf("%0.6lf\n",sum);
	}
	else if(n>15)
	{
		sum=7+(n-2)*2.1;
		printf("%0.6lf\n",sum);
	}
}