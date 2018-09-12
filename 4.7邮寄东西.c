#include<stdio.h>
int main()
{	
	const double pi =0.20 ;
	double a,b,c ;	
	int d;
	scanf ("%lf,%lf,%lf,%d",&a,&b,&c,&d);
	if (a>1||b>1||c>1||d>30)
	{	
		printf("Error\n");
	}
	else if(d<10)
	{
		printf ("%.2f\n",0.80*d+pi);
	}
	else if(d>=10&&d<20)
	{
		printf("%.2f\n",0.75*d+pi);
	}
	else if(d>=20&&d<30)
	{	
		printf("%.2f\n",0.7*d+pi);
	}
	return 0;
}