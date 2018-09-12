#include<stdio.h>
#include"string.h"
main()
{
	char a[81],b[81],i,j=0;
	int n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
			b[j++]=a[i];
	}
	for(i=0;i<j;i++)
	printf("%c",b[i]);
	printf("\n");

}