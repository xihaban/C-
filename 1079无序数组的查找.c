#include<stdio.h>
main()
{
	int i,n,a[20],count=0;

	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==a[i]){
			printf("%d",i);
		count++;}
	
	}
	if(count==0)
		printf("not found\n");

}