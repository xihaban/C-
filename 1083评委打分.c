#include<stdio.h>
int main()
{
	int a[1000],n,i,max,min;
	double sum=0.0;
//	freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(max>a[i])
			max=a[i];
		if(min<a[i])
			min=a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	sum=(sum-max-min)/(n-2);
	printf("%.2lf\n",sum);
}
