#include<stdio.h>
main()
{
	int x,i,j,m,p=0;
	scanf("%d",&x);
	for(i=1;i<=x/6;i++)
		for(j=1;j<=x/5;j++)
			for(m=1;m<=x/4;m++)
			{
				if(6*i+5*j+m*4==x)
				{
					printf("%d %d %d\n",i,j,m);
					p++;
				}
			}
			if(p==0)
				printf("No Answer\n");
			
			
}