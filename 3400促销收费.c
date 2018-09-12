#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
		if(n<=20000)
		{
			if(n>=300)
				printf("%d\n",n-100);
			else if(n>=200)
				printf("%d\n",n-60);
			else if(n>=100)
				printf("%d\n",n-30);
			else printf("%d\n",n);
		}
}