#include<stdio.h>
main()
{
	int t,x,y,z,m,i;
	double f;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d%d",&x,&y,&z,&m);
		f=(11*x-111*y+1111*z)/(double)m;
		printf("%.2lf\n",f);
	}
}