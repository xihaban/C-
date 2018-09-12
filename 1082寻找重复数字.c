#include<stdio.h>
main()
{
	int m=0,n,i,g=0,f=0,k,j,a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				b[m++]=a[i];
		}
		for(k=0;k<m;k++)
			if(b[k]!=a[i])
				c[g++]=b[k];
	}
	if(g=0)
		printf("-1\n");
	else 
		for(i=0;i<g;i++)
		{
			if(f==0){
				printf("%d",c[i]);
				f=1;
			}
			else printf(" %d",c[i]);
		}
		printf("\n");
		
}
