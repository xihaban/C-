#include<stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	if(n>=65&&n<=90)
		printf("upper\n");
	else if(n>=97&&n<=122)
		printf("lower\n");
	else if(n>=48&&n<=57)
		printf("digit\n");
	else printf("other\n");
}