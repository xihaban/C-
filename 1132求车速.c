#include<stdio.h>
main()
{
	int n,i,sum=0;
	for(i=95860;;i++)
	{

		n=i;
		while (i>0)
		{
			sum=sum*10+i%10;
			i=i/10;
		
		}
			if(n==sum)
				printf("%d\n",n);
			else sum=0;
	}
}