#include<stdio.h>
main()
{
	double x,b;
	int a[5],i,max=0,min=100000,sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		sum=sum+a[i];
	}
	b=sum/5.0;
	printf("%d\n%d\n",max,min);
	printf("%.2lf\n",b);
	for(i=0;i<5;i++)
		if(a[i]<b)
			printf("%d  ",a[i]);

}