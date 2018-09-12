#include<stdio.h>
main()
{
	int a[4][4],n,i,j;
	for(i=0;i<4;i++)
		for(i=0;j<4;j++)
			scanf("%d",&a[i][j]);
		scanf("%d",&n);
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
			{
				if(i>=j){
					a[i][j]=a[i][j]*n;
					printf("%4d",a[i][j]);
				}
				else printf("%4d",a[i][j]);
			}
}