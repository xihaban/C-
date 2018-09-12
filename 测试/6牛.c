#include<stdio.h>
int num(int year)
{
	if(year<=3)
	{
		return 1;
	}
	return  num(year-1)+num(year-3);
}
 main()
 {
	 int n,sum;
	 scanf("%d",&n);
	 sum=num(n);
	 printf("%d\n",sum);
 }