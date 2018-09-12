#include<stdio.h>
main()
{
	int n,m,sum=0,i,j;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&m);
		for(j=1;j<m;j++)
		{
			if(m%j==0)
			sum+=j;
		}
		printf("%d\n",sum);
		sum=0;
		n--;

	}
}