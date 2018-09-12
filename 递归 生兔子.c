#include<stdio.h>
int num(int month)
{
	if(month==1||month==2)
	{
		return 1;
	}
	return  num(month-1)+num(month-2);
}
main()
{
	int n,sum;
	scanf("%d",&n);
	sum=num( n );
	printf("%d个月后，兔子的总数为%d对,%d只\n",n,sum,sum*2);

}


