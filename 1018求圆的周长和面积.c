#include<stdio.h>
#define PI 3.14159
int main ()
{
    float  r;
	float l,s;
	scanf("%f",&r);
	l=2*r*PI;
	s=PI*r*r;
	printf("%.2f %.2f\n",l,s);
	return 0;
  }	
