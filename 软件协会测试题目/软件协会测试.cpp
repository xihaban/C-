#include<stdio.h>
main()
{
	int a[4]={1,2,3,4};
	int i,j,m;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			for(m=0;m<4;m++)
			{
				if(i==j||j==m||i==m)
					continue ;
		    	else
				printf("%d%d%d\n",a[i],a[j],a[m]);}
						
}