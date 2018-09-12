#include<stdio.h>
main()
{
	int n,m,i,j,sum=0,a[200];
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];}
		if(sum==0)
			break;
		else
		  printf("%d\n",sum);
		sum=0;
	}
}