#include <stdio.h>
main()
{
	int n[8],i,j,t;
	for(i=0;i<8;i++)
	scanf("%d",&n[i]);
	printf("\n");
	for(j=1;j<8;j++)
		for(i=0;i<8-j;i++)
			if(n[i]>n[i+1])
			{
				t=n[i];
				n[i]=n[i+1];
				n[i+1]=t;
			}
			for(i=0;i<8;i++)
			printf("%d ",n[i]);
			printf("\n");

}
