#include<stdio.h>
 main()
{

	int i,n, a[100]={0,1};
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];	
	}

	printf("%d\n",a[n-1]);

}