#include<stdio.h>
main()
{
	char ch;
	scanf("%s",&ch);
		if('ch'>=65&&'ch'<=90)
		{
			ch=ch+32;
			printf("%c\n",ch);
		}
		printf("%c",ch);

}