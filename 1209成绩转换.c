#include<stdio.h>
main()
{
	int n,i,x;
	scanf("%d",&n);
			while(n!='\n')
		{
			if(n>100||n<0)
				printf("Score is error!\n");
			else 
			{
				x=n/10;
				if(x==10||x==9)
					printf("A\n");
				else if(x==8)
					printf("B\n");
				else if(x==7)
					printf("C\n");
				else if(x==6)
					printf("D\n");
				else printf("E\n");
			}
			scanf("%d",&n);
			
		}
}