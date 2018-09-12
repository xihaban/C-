#include<stdio.h>
void main()
{
	char ch;
	ch=getchar();
	if(ch<='z'&&ch>='a')
	{
		ch=97-(ch-90);
		printf("%c"ch);
	}

   
}