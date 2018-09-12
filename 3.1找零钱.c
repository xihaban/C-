#include<stdio.h>
main()
{	
	int x,b,c,d,e,f;
	scanf("%d",&x);
	b=x/50;
	c=x%50/10;
	d=x%50%10/5;
	e=x%50%10%5/2;
    f=x%50%10%5%2/1;
	printf("%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f);
	return 0;
}