#include<stdio.h>
main()
{
	int a[10],i,n,count=0;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n+30>=a[i])
			count++;
	}
	printf("%d\n",count);
}