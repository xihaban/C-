#include<stdio.h>
void main()
{
	int i,g,n,m;
		scanf("%d",&m);
	while(m>=2)
	{
		for(i=2;i<m;i++)
			if(m%i==0)
				break;
			
			if(m==i)
				printf("%4d",i);
			m--;
	
	}
	printf("\n");
}
