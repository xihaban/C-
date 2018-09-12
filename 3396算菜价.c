#include<stdio.h>
main()
{
	int n,x,y;
	double m,sum=0,num;
	while(scanf("%d %lf",&n,&m)!=EOF){
		sum=sum+n*m;
	}
	(double)x=sum*100;
	y=x%10;
	if(y>=5)
	{
		x=x+10;
		x=x/10;
	}
	else x=x/10;
	num=(double)x/10.0;
	printf("%.1lf",num);

}