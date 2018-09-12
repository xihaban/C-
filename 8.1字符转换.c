#include<stdio.h>
main()
{
	int i;
	char s[20];
	for(i=0;(s[i]=getchar())!='\n';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			printf("%c",s[i]);}
	printf("\n");
}