#include<stdio.h>
main()
{
	int n,m,i,j,t,a[50],b[50],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{	for(j=i;j<n;j++)
			
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]+1==a[i+1])
			count++;
	}
	printf("%d\n",count);

			
			
			
}