#include<stdio.h>
#include<string.h>

main()
{
	int n,i,j,l,sum;
	char a[31];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
		scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			sum+=(a[j]-96);
		}
		printf("%d\n",sum);
	}
}