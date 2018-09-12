#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("%-9.0lf%-9.0lf%-9.0lf\n%-9.0lf%-9.0lf%-9.0lf\n%-9.0lf%-9.0lf%-9.0lf\n",a,a*a,a*a*a,b,b*b,b*b*b,c,c*c,c*c*c);
	return 0;
}