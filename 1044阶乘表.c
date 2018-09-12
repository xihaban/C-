#include<stdio.h>
int main()
{
	double n,i=1,a=1;
	scanf("%lf",&n);
	if(n<=20)
	{
		for(i=1;i<=n;i++)
		{	a=a*i;
		printf("%-4.0lf%-20.0lf\n",i,a);
		}
	}
	return 0;
}
