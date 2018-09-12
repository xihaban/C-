#include<stdio.h>
main()
{
	int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int n,m;
	scanf("%d%d",&n,&m);
	if(n%4==0&&n%100!=0||n%400==0)
		printf("%d\n",r[m-1]);
	else
		printf("%d\n",p[m-1]);

}