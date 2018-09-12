#include<stdio.h>
main()
{
	char h;
	int count=0;
	while(scanf("%c",&h)!=EOF&&h!='\n'){
		if(h<=57&&h>=48)
			count++;}
		printf("%d\n",count);
}