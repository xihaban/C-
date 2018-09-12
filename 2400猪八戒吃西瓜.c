#include<stdio.h>
main()
{
	long n,m,t,a[100002]={0},b[100002]={0},i,j;
//	freopen("in.txt","r",stdin);
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
		scanf("%ld",&a[i]);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;		
			}
	}
	scanf("%ld",&m);
	for(i=1;i<=m;i++)
	{	scanf("%d",&b[i]);

		for(j=1;j<=n;j++)
		{
			if(b[i]==a[j])
			printf("%d\n",j);
		}
	}
				
}