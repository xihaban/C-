#include<stdio.h>
main()
{
	int a,b,c,d,x,y;
	scanf("%d:%d %d:%d %d",&a,&b,&c,&d,&x);
	y=(c*60+d)-(a*60+b)+20*x;
	printf("%d\n",y);
}
