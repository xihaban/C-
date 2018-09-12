#include<stdio.h>
main()
{
	long n=1;
	int i,m;
	while((scanf("%d",&m)!=EOF)&&m<30&&m>1)
	{
		for(i=1;i<m;i++)
			n=(n+1)*2;
		printf("%ld\n",n);
		n=1;
	}

}