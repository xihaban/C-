#include<stdio.h>
#include<math.h>
main()
{
	int n,a[100],i,t,j;
	scanf("%d",&n);
	if(n<=100&&n>0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
				if(fabs(a[i])<fabs(a[j]))
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;}
		}
		printf("%d",a[0]);
		for(i=1;i<n;i++)	
			printf(" %d",a[i]);
		printf("\n");
	}
	else return 0;
	scanf("%d",&n);		
}
