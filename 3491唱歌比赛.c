#include<stdio.h>
int main()
{
	int a[1000],n,i,t,j;
	double sum=0.0;
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
			if(a[i]>a[j])
			{	t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
			
			
	}
	for(i=1;i<n-1;i++)
	{
		sum=sum+a[i];
	}
	sum=sum/(n-2);
	printf("%.2lf\n",sum);
}
