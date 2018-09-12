#include<stdio.h>
main()
{
	int n,m,f=0;
	while(scanf("%d %d",&n,&m)!=EOF){
		if(f==0)
		{
			printf("%d\n",n+m);
			f=1;
		}
		else printf("\n%d\n",n+m);
		
	}
	
}