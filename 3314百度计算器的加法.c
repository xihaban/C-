#include<stdio.h>
main()
{
	int a,b;
	freopen("in.txt","r",stdin);
	while(scanf("%d %d",&a,&b)!=EOF&&a!='\n'&&b!='\n'&&a>=0&&b<=10)
			printf("%d\n",a+b);	
}