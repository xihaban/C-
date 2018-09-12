#include<stdio.h>
main()
{
	int a[100],n,i,f=0,t,j,min=10000;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i])
		{
			min=a[i];
			j=i;
		}
	}
	t=a[j];
	a[j]=a[0];
	a[0]=t;
	for(i=0;i<n;i++)
	{
		if(f==0)
		{
			printf("%d",a[i]);
			f=1;}
		else printf(" %d",a[i]);}
	printf("\n");
	
}