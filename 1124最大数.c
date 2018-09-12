#include<stdio.h>
main()
{
	int n,max;
	scanf("%d",&n);
	max=n;
	while(n!=-1){
		if(n>max)      
			max=n;
		scanf("%d",&n);
	}
	printf("%d\n",max);
}