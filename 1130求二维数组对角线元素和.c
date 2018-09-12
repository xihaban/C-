#include<stdio.h>
main()
{
	int a[10][10] n,i,j,sum=0;
	scanf("%d",&n);
	a[10][10]= a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			sum=sum+a[i][i]+a[i][n-1-i];
		printf("%d",sum);
}