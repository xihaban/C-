#include<stdio.h>
#include<string.h>
main()
{
	char a[256];
	int i,j,l,f=1;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<=(l/2);i++)
	{
		if(a[i]==a[l-i-1])
		   f=0;
		else {f=1;break;}
	
	}
	if(f==0)
		printf("Y\n");
	else printf("N\n");
	
	
}
