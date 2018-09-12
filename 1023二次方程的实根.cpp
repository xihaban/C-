#include<stdio.h>
#include<math.h>
 main ()
{
	int a,b,c;
	double x,y;
	scanf("%d%d%d",&a,&b,&c);
	x=((-1*b)+sqrt(b*b-4*a*c))/(2*a);
	y=((-1*b)-sqrt(b*b-4*a*c))/(2*a);
	printf("%7.2lf%7.2lf\n",x,y);	
}
