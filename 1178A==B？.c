#include<stdio.h>
main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
			if(a==b)
			printf("YES\n");
			else printf("NO\n");
	}
}