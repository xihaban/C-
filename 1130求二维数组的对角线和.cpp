#include<stdio.h>
 int main()
{
	int  a[10][10],n,i,j,sum=0;
		scanf("%d",&n);
	   a[10][10]=a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			sum=sum+a[i][i]+a[i][n-1-i];
		if(n%2==0)
		printf("%d",sum);
		else 
		{
			sum=sum-a[n/2][n/2];
			printf("%d\n",sum);}
		return 0;
}