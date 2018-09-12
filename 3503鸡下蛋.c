#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int n,m,i,l,f=0;
	while(gets(a)!=EOF){
		f=0;
		
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i+2]=='M'&&a[i+1]=='M'&&a[i]=='M')
			{	f=1;
				break;
			}
		}
		if(f==1)
			printf("^v^\n");
		else printf("==\n");
	}

}