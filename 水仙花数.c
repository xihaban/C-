#include<stdio.h>
void main()
{
	int n,a,b,c;
	for(n=100;n<1000;n++)
	{ 
	    a=n/100;
     	b=n%100/10;
    	c=n%10;
		if(n==a*a*a+b*b*b+c*c*c)
			printf("%d\n",n);
	}
}