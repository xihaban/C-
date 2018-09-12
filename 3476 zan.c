#include<stdio.h>
#include<string.h>
main()
{
	int i,l;
	char a[20];
	while(scanf("%s",a)!=EOF&&a!='\0')
	{
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]-'0'==6)
		printf("zan!");
		}
			printf("\n");
			
	}
		
}