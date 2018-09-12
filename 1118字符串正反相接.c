#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		a[n++]=a[i];
	}
	for(i=0;i<n;i++)
		printf("%c",a[i]);
	printf("\n");

}