#include<stdio.h>
main()
{
	int n,i,a[100],min=100;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<min)
			min=a[i];
	}
	printf("%d\n",min);
}