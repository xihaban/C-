#include<stdio.h>
#include<string.h>
main()
{
	char s[1001],f=1,i,n;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			printf("%c\n",s[i+1]);
			f=0;
			break;
		}

	}
		if(f==1) printf("No\n");

}