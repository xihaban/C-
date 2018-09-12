#include<stdio.h>
main()
{
	double n,a,b,c,m[4];
	scanf("%lf%lf%lf%lf",&n,&a,&b,&c);
	m[0]=n*a;
	m[1]=n*b;
	m[2]=n*c;
	if(m[0]<m[1]&&m[0]<m[2])
		printf("A %.0lf\n",m[0]);
	if(m[1]<m[2]&&m[1]<m[0])
		printf("B %.0lf\n",m[1]);
	if(m[2]<m[1]&&m[2]<m[0])
		printf("C %.0lf\n",m[2]);
}