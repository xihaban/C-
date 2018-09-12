#include<stdio.h>
main()
{
	int a[4][5],i,j,sum=0;
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		for(j=0;j<5;j++)
			sum=sum+a[0][j]+a[3][j];
		for(i=0;i<4;i++)
			sum=sum+a[i][0]+a[i][4];
		sum=sum-a[0][0]-a[3][0]-a[0][4]-a[3][4];
		printf("%d\n",sum);
		
} 