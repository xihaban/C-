#include<stdio.h>
#define pi 0.0225
int main()
{
	int i, n;
	double x ;
	scanf("%d%lf",&n,&x);
	for(i=1;i<=n;i++)
		x=x+x*pi;
	printf("%.6f\n",x);

}