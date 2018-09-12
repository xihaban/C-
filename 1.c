#include<stdio.h>
main()
{
	int m,n,i;
	int count=0;
	scanf("%d%d",&n,&m);
	for( 1;n<=m;n++)
	{
		for(i=1;i<=n;i++)
		{	if(n%i==0)
		count++;}
			if(count==2)
				printf("%d ",i);

	}

}
