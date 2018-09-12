#include<stdio.h>
#include<math.h>
main()
{
	char a[210];
	int n,i;
//	freopen("in.txt","r",stdin);
	while(scanf("%s",a)!=EOF)
	{
		n=strlen(a);
		printf("%s",a);
		for(i=n-2;i>=0;i--)
			printf("%c",a[i]);
		printf("\n");
	}
	
}