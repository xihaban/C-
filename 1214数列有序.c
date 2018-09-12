#include<stdio.h>
main()
{
	int n,m,a[100],i,j;
	while(scanf("%d %d",&n,&m)!=EOF&&n!=0&&m!=0){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			if(m<a[i])
			{
				t=a[i];
				a[i]=m;
			}
		}
	

	}
}
