#include<stdio.h>
void main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	while(n<=m)
	{
		for(i=2;i<n;i++)
			if(n%i==0)break;
			if(n==i)
				printf(" %d",i);
			n++;
	
	}
	printf("\n");
}
