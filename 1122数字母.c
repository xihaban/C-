#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	int n,i,count=0;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
			count ++;

	}
	printf("%d\n",count);

}