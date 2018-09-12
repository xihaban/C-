#include<stdio.h>
int summary(int k);
main()
{
	int k,sum;
	scanf("%d",&k);
	sum=summary(k);
	printf("%d\n",sum);
}


int   summary( int k)
{
	int sum=0,m=0,count=0;
	int a[1000],b=1,i;
	for(i=13;i<=k;i++)
	{
		if(i%13==0||i%17==0)
		{	m++;
			a[m]=i;

		}

	}
	for(i=m;i>0;i--)
	{
		sum=sum+a[i];
		b++;
		if(b>10)break;
	}
	return sum;
}
