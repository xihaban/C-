#include<stdio.h>
main()
{
	int i;
	char ch;
	for(i=0;i<100;i++)
	{	scanf("%c",&ch);
		if('ch'>=65&&'ch'<=90)
		{
			ch=ch+32;
		}
		printf("%c",ch);
}