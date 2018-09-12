#include<stdio.h>
main()
{
	int n,m[15],b[15],k=0,i,j,sum=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=1;j<=m[i];j++)
			sum=sum*j;
		b[k]=sum;
		k++;
		sum=1;
	}
	for(i=0;i<k;i++)
	printf("%d\n",b[i]);
}