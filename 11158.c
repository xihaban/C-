#include<stdio.h>
main()
{
	int n,m,sum=0,i;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(i%3==1&&i%5==3)
			sum+=i;
	}
	printf("%d\n",sum);
}