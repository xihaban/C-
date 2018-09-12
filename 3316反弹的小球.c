#include<stdio.h>
main()
{
	int n,i;
	double sum,h;
	scanf("%lf %d",&h,&n);
	sum=h;
	for(i=1;i<n;i++)
	{
		sum=sum+2*h*2.0/3;
		h=h*2.0/3;
	}
	printf("%.2lf\n",sum);
}