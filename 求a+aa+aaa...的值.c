#include<stdio.h>
main()
{
	int sum=0,num=0,i,n,a;
	scanf("%d%d",&n,&a);
	for(i=0;i<a;i++)
	{	sum=sum*10+n;
		num=num+sum;}
	printf("%d\n",num);

}