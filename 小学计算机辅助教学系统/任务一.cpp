#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int x,a,b;
	srand(time(NULL));
	a=rand()%10+1;
	b=rand()%10+1;
	printf("%d*%d=?",a,b);
	printf("\n");
	scanf("%d",&x);
	if(a*b==x)
		printf("Ringht!\n");
	else  printf("Wrong!Please try again.\n");
}