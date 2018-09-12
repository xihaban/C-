#include<stdio.h>
main()
{   int a,i;
	double n,m,h,x;
	scanf("%d%lf%lf%lf",&a,&n,&m,&h);
	for(i=0;i<a;i++){
		x=(n+m)/2.0-h;
		m=x;
	}
	printf("%.2lf\n",x);

}