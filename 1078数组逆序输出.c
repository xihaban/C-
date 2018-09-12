#include<stdio.h>
main()
{
	int a[20],i;
//	freopen("in.txt","r",stdin);
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	for(i=19;i>0;i--)
		printf("%d ",a[i]);
	printf("%d\n",a[i]);
}