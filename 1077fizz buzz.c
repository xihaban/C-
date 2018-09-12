#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0&&i%5==0)
			printf("fizz buzz\n");
		else if(i%3==0)
			printf("fizz\n");
		else if(i%5==0)
			printf("buzz\n");
		else printf("%d\n",i);		
	}
}