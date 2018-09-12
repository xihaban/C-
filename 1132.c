#include<stdio.h>
main()
{
	int n,i,j,sum=0;
	for(i=95860;;i++)
	{
		n=i;
		j=i;
		sum = 0;
		while (j>0)
		{
			sum=sum*10+j%10;
			j=j/10;
		
		}
		if(n==sum)
		{
			printf("%d\n",n);
				break;
		}

	}
}