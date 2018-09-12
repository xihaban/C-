#include<stdio.h>
main()
{
	int n,sum=0,i,j,a[10][10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
				sum+=a[i][j];
			if(i+j==n-1)
				sum-=a[i][j];
		}
		for(i=0;i<n;i++){
			sum-=a[i][n-1];
			sum-=a[n-1][i];}
		sum+=a[0][n-1];
		sum+=a[n-1][0];
		sum+=a[n-1][n-1];		
		printf("%d\n",sum);

}