#include<stdio.h>
main()
{
	int m,a,b,c,num;
	scanf("%d",&m);
	a=m/100;
	b=m/10%10;
	c=m%10;
		if(a>4)
			a=(a-1)*9*9;
		else a=a*9*9;
		if(b>4)
			b=(b-1)*9;
		else b=b*9;
		if(c>4)
			c=(c-1);
		else c=c;
		num=a+b+c;
	printf("%d\n",num);
}