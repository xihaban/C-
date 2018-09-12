#include <stdio.h>
void  main()
{	
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	if(a+b==c)
		printf("+\n");
    else if(a-b==c)
		printf("-\n");
    else  if(a%b==c)
		printf("%%\n");
    else if(a*b==c)
		printf("*\n");
    else if (a/b==c)
		printf("/\n");
}