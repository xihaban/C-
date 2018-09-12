#include<stdio.h>
int b( )
 {
	int num=1,sum=0,a=1,i;
	for(i=1;i<=30;i++)
	{
		num=num*i;
		sum=sum+a*num;
		a=-a;
	}
	return sum;
  }
main()
{   int sum;
	sum=b( );
	printf("%d\n",sum);
}



