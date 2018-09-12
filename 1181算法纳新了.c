#include<stdio.h>
main()
{
	int n,i,j;
	int t,a[110],count=0;
	double x=0;
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&t);
		for(j=0;j<t;j++)
		{
			scanf("%ld",&a[j]);
			if(a[j]==0)
				count++;}
		x=(double)t/(double)count;
			printf("%.4lf\n",x);

	}
}