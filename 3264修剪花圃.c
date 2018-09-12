#include<stdio.h>
main()
{
	int x,n[999][999],a[180],i,k=0,j,sum=0,min=1000;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&n[i][j]);
			if(i==j||i+j==x)
				sum=sum+n[i][j];
		
		}
	

	}
		sum=sum*2;
/*	for(i=0;i<k;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	for(i=0;i<k;i++)
	{
		sum=sum+(a[i]-min);
	}*/
	printf("%d\n",sum);



}