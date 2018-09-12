#include<stdio.h>
main()
{
	
	int a;
	double sum=0.0,i=0;
   //freopen("in.txt","r",stdin);
	while(scanf("%d",&a)!=EOF&&a>=0)
	{ i++;
		sum=sum+a;
	}
	printf("%.1lf\n",sum/i);
	
}