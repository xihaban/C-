#include<stdio.h>
main()
{
	int n,i,a[100],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			if(a[i]==33||a[i]==34)
				count++;
	}
	printf("%d\n",count);
}