#include<stdio.h>
#include<string.h>
main()
{
	char a[53];
	int  n,m,i,l,j,count=0;
//	freopen("in.txt","r",stdin);
	while(scanf("%s",a)!=EOF&&a!='\0'){
		l=strlen(a);
		count++;
		for(i=0;i<l;i++)
		{
			if(a[i]=='Q'){
				printf("%d\n",count);
				break;}
		}
				
	}
}
