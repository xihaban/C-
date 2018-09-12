#include<stdio.h>
main()
{
	int n,a,b,i,sum;
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		a=a%100;b=b%100;
		sum=a+b;
		sum=sum%100;
		printf("%d\n",sum);
		sum=0;
	}
}