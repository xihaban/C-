#include<stdio.h>
main()
{
	int num[10],i,max=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		if(max<num[i])
			max=num[i];
	}
	for(i=0;i<10;i++)
	{
		if(max==num[i])
			printf("%d\n",i);
	}
}
