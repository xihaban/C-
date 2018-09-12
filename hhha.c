#include<stdio.h>
int main()
{
	int m,n,i,j=1,sum,a[100],flag=0,b[100];
		scanf("%d",&n);

	while(j<=n)
	{
		sum=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{	{ 

			scanf("%d",&a[i]);
			sum+=a[i];
		}
			b[i]=sum;
		
	}
	j=1;
	while(j<=n)
	{
		if(flag==0)
		{
			printf("%d\n",b[i]);
			flag=1;    }
		else
			printf("\n%d\n",b[i]);
		j++;
	}
	return 0;
}
