#include<stdio.h>
main()
{
	int n,m,i,f=1,a[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[m]++;
		if(f==1)
		{
			printf("%d",a[m]);
			f=0;}
		else printf(" %d",a[m]);
	}
}