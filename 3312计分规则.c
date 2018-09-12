#include<stdio.h>
main()
{
	int n,a[100],i,max=0,min=100;
	double x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	x=(min+max)/2.0;
	printf("%.2lf\n",x);
}