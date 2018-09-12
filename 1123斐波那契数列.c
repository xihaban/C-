#include<stdio.h>
main()
{
	int a[40]={1,1,2},i,n;
	scanf("%d",&n);
	for(i=3;i<n;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
	printf("\n");
}