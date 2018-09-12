#include<stdio.h>
int num(int n)
{
	int b=1,i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			b=0;
	}
	return b;


}
main()
{
	int n;
	scanf("%d",&n);
	if(num(n))
		printf("Y\n");
	else printf("N\n");

	
}