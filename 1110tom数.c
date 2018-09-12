#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	int n,i,sum=0;
	while(scanf("%s",a)!=EOF){
		n=strlen(a);
		for(i=0;a[i]!='\0';i++)
			sum+=(a[i]-48);
		printf("%d\n",sum);
		sum=0;
	}

}