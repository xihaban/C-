#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%3==0&&n%5==0)
			printf("fizz buzz\n");
		
		else if(n%3==0)
			prinntf("fizz\n");
		else if(n%5==0)
			printf("buzz\n");
		else printf("%d\n",n);		
	}
}