#include<stdio.h>
main()
{
	int a,b,c,x;
	scanf("%d%d%d",&a,&b,&c);
	if((a*100/(a+b+c))>=75) 
		printf("Platanus orientalis\n");
	if((b*100/(a+b+c))>=75)
		printf("Ginkgo\n");
	 if((c*100/(a+b+c))>=75) 
		printf("Pine\n");
}