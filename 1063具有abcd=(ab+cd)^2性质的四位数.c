#include<stdio.h>
main()
{
	int n,m,i,a,b;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		a=i/100;
		b=i%100;
		if((a+b)*(a+b)==i)
			printf("%d\n",i);

	}
}