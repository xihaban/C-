#include<stdio.h>
main()
{
	int sum,a,b,c,i;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		sum=a*100+b*10+c;
		if(sum==a*a*a+b*b*b+c*c*c)
			printf("%d ",i);
	}
	printf("\n");
}