#include<stdio.h>
main()
{
	int n,m,i,j,t,f,k;
	double a[100000];
	scanf("%d",&n);
	while(n>0){
		f=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
			scanf("%lf",&a[j]);
		for(j=0;j<m;j++)
		{
			for(k=j;k<m;k++)
				if(a[j]<a[k])
				{
					t=a[j];
					a[j]=a[k];
					a[k]=t;
				}
				
		}
		for(j=0;j<m;j++)
		{
			if(f==0)
			{
				printf("%.0lf",a[j]);
				f=1;
			}
			else printf(" %.0lf",a[j]);
		}	printf("\n");n--;
	}
}