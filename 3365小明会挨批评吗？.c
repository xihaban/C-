#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(m<=2230)
	{
		if(n>=75)
			printf("OK\n");
		else printf("BAD\n");

	}
	else printf("OK\n");
}