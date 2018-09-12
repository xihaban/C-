#include<stdio.h>
int main()
{	
	int m,n,a,sum=0,sun=0;
	while(scanf("%d %d",&m,&n)!=EOF)
	{	
		for(a=m;a<=n;a++)
		{
			if(a%2==0)
				sum=sum+a*a;
			else
				sun=sun+a*a*a;
		}
	
		printf("%d %d\n",sum,sun);
			sum=0;sun=0;
	}
	return 0;
	
}