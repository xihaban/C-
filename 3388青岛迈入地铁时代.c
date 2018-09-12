#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=5)
		printf("2\n");
	else if(n<=10)
		printf("3\n");
	else if(n<=17)
		printf("4\n");
	else if(n<=27)
		printf("5\n");
	else if(n<=38)
		printf("6\n");
	return 0;
}