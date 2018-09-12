#include<stdio.h>
int fun(int n)
{
	int b=1,i;
	for(i=2;i<n/2;i++)
	if(n%i==0)
		b=0;
	return b;
		
}
main()
{
	int n;
	scanf("%d",&n);
	if(fun(n))
		printf("1\n");
	else printf("0\n");
	
	}

