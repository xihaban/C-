#include<stdio.h>
main()
{
	int n,i,a[100],sum=1;
//	freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
			sum*=a[i];
	}
	printf("%d\n",sum);
		
}