#include<stdio.h>
int num(int n)
{
	if(n==1)
		return 10;
	else
		return num(n-1)+2;
}

main()
{
	int n,x;
	scanf("%d",&n);
	x=num(n);
	printf("%d\n",x);
}