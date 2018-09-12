#include<stdio.h>
main()
{
	char a;
	int i;
	scanf("%c",&a);
	for(i=65;i<=90;i++)
	{
		if(a==i||a==i+32)
			printf("%d\n",i-64);
	}

}