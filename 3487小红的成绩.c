#include<stdio.h>
main()
{
	typedef struct date
	{
		char name[30];
		int sore[3];
	} std[100];
	int n,m,sum[3]={0},l,max=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",std[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%d",&std[i].sore[j]);
			sum[i]+=std[i].sore[j];
		}
	
	for(j=0;j<3;j++)
		if(sum[j]>max)
		{max=sum[j];	l=j;}
		printf("%s",std[i].name);
		for(j=0;j<3;j++)
		printf(" %d",std[i].sore[j]);
		printf("%d\n",sum[l]);
	}

	
}