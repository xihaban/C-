#include<stdio.h>
main()
{
	int a[10000],j,n,t;
	int i=0,m=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		n=a[i];
		i++;
		m++;
	}
	for(j=1;j<i;j++)
		for(i=0;i<m-j;i++)
			if(a[i]<a[i+1])
		{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
		}
			for(i=0;i<m;i++)
			printf("%d",a[i]);
			printf("\n");
}