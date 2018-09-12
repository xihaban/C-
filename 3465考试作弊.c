#include<stdio.h>
main()
{
	double n,m,i=0,j=0;
    //freopen("in.txt","r",stdin);
	while(scanf("%d%d",&n,&m)!=EOF&&n>=0&&m>=0)
	{   i++;
	
	  if(n==m) 
			 j++;
	  else break;
	}

	if(i==j)
		printf("Yes\n");
	else printf("No\n");

	
}