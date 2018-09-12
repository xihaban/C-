#include<stdio.h>
void main()
{
	int n,i;
	double b,a=1,sum=1;
	scanf("%d",&n);
   for (i=1;i<=n;i++)
	{
	    a=a*i;
		b=1/a;
       sum=sum+b;
	}
	printf("e=%16.10f\n",sum);
}
