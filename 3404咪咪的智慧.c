#include<stdio.h>
main()
{
	int n,m,count=0,i,a[30];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(m>=a[i])
			count++;
	}
	printf("%d\n",count);
}