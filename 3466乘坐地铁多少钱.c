#include<stdio.h>
main()
{
	int n;
	double m,x;
	scanf("%d%lf",&n,&m);
		if(n<120)
			printf("0.00\n");
		if(n>=120&&n<=150)
		{
			x=m/2.0;
			printf("%.2lf\n",x);
		}
		if(n>150) 
			printf("%.2lf\n",m);
}