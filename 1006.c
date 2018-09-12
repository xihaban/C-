#include<stdio.h>
main()
{
	int n,i,a[100],sum=0;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		printf("%d\n",sum);
		sum=0;
	}
	
}