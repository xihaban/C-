#include<stdio.h>
int  main()
{
	
	double sum=0,num=1;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=num*i;
		sum=sum+num;	
	}
	printf("%.0lf\n",sum);
}
