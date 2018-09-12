#include<stdio.h>
#include<string.h>
main()
{
	char a[80];
	int i,n,m;
	while(gets(a)!=EOF){
		m=strcmp(a,"End of file");
			if(m==0) break;
			else
				
				n=strlen(a);
			for(i=0;i<n;i++)
			{
				if(a[i]>='a'&&a[i]<='z')
					a[i]=a[i]-32;
			}
			puts(a);
			printf("\n");
			
	}
}