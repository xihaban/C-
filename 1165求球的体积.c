#include<stdio.h>
# define pi 3.1415926
main()
{
	double n,v;
	while(scanf("%lf",&n)!=EOF){
		v=4.0/3*pi*n*n*n;
		printf("%.3lf\n",v);
	}
}