#include<stdio.h>
main()
{
	int a,b,c,d,n,m;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	n=((c*60+d)-(a*60+b))/60;
	m=((c*60+d)-(a*60+b))%60;
	printf("%d %d\n",n,m);
}