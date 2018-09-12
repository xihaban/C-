#include<stdio.h>
#include<math.h>
main()
{
	int n,m,i;
	double x;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		x=log(i);
		printf("%4d%8.4lf\n",i,x);
	}
}