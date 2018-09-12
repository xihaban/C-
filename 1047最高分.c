#include<stdio.h>
main()
{
	int max=0,n;
	while(scanf("%d",&n)!=EOF&&n>0){
		if(n>max)
			max=n;
	}
	printf("%d\n",max);

}