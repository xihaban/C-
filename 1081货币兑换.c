#include<stdio.h>
main()
{
	double  a[11]={0,0.1,0.2,0.5,1,2,5,10,20,50,100};
	
	int n,m;
	double sum=0;
//	freopen ("in.txt","r",stdin);
	while(scanf("%d%d",&n,&m)!=EOF&&n>=0&&m>=0)
	{
		sum+=a[n]*m;
	}
	printf("%.2lf\n",sum);
}