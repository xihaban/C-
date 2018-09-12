#include<stdio.h>
main()
{
	double sum=0;
	int a[4],i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%.1lf\n",sum/4);
}