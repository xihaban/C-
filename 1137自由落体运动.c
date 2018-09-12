#include<stdio.h>
main()
{
	double s=100,h=s/2;
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("%.4lf\n",s);
}