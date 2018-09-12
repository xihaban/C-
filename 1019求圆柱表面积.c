#include<stdio.h>
#define PI 3.14159
int main()
{	
double r,h,x;
	scanf("%lf%lf",&r,&h);
	x=2*PI*r*r+(2*r*PI*h);
	printf("%.2f\n",x);
	return 0;
}