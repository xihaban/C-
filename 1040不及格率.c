#include<stdio.h>
main()
{
	int i,n ,x;
	float count=0;
	int a[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
		if(a[i]<60)
			count++;}
	x=count*100/n;
	printf("%d%%",x);

}