#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+c*c==b*b||a*a+b*b==c*c||b*b+c*c==a*a)
			printf("yes\n");
    	else printf("no\n");
		return 0;
}