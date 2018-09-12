#include<stdio.h>
main()
{
	int n ,a[1000],b[1000],f=0,i,j,t;
freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{
		for(i=j;i<n;i++)
			if(a[j]=a[i])
				b[f++]=a[j];
	}
	for(i=0;i<f;i++)
	{	for(j=i;j<f;j++)
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
	}
	printf("%d",f);
	printf("%d",b[0]);
	for(i=1;i<f;i++)
		printf(" %d",b[i]);	
	printf("\n");
	
}