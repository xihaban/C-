#include<stdio.h>
main()
{
	int n,a[365],i,j,count=0;
	scanf("%d",&n);
	if(n<=365&&n>=3){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<n-1;i++)
		{
			if(a[i-1]>a[i]&&a[i+1]>a[i]||a[i-1]<a[i]&&a[i+1]<a[i])
				count++;
		}
		printf("%d\n",count);}
	
	
}