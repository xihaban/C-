#include<stdio.h>
#include<string.h>
main()
{
	int n,i;
	char a[255];
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	
}