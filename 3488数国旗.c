#include<stdio.h>
main()
{
	int n,m,i,j,count=0;
	char  a[50][50];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
		if(a[i][j]=='f'||a[i][j]=='F')
			count++;}
		
	
	printf("%d\n",count);
	
	
}