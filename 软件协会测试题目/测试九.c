#include<stdio.h>
int num(int n)
{
	if(n<=3)
		return 1;
	return num(n-1)+num(n-3);

}
main()
{
	int n,sum;
	scanf("%d",&n);
	sum=num(n);
	printf("%d\n",sum*2);

}
