#include<stdio.h>
main()
{
	double n;
	scanf("%lf",&n);
	if(n<500)
		printf("%.2lf\n",n);
	else if(n<1000)
		printf("%.2lf\n",n*0.95);
	else if(n<3000)
		printf("%.2lf\n",n*0.9);
	else if(n<5000)
		printf("%.2lf\n",n*0.85);
	else printf("%.2lf\n",n*0.8);
}