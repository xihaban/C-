#include<stdio.h>
#include<string.h>
main()
{
	char a[50],n,m;
	int i,l;
	scanf("%s %c %c",a,&n,&m);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]==n)
			a[i]=m;
	}
	puts(a);

}