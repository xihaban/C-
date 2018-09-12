#include<stdio.h>
main()
{
	char ch;
	scanf("%c",&ch);
	if('a'<=ch&&ch<='z'){
		ch=ch-32;
		printf("%c",ch);}
		else printf("%c\n",ch);
}
