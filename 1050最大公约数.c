#include<stdio.h>
main()
{
	int n,m,i,t;
	scanf("%d%d",&n,&m);
	if(m>n)
	{
		t=m;
		m=n;
		n=t;
	}
	while(n!=0)
	{
		i=m%n;
		m=n;
		n=i;
	}
	printf("%d\n",m);


}