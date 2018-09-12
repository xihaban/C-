#include <stdio.h>
int main()
{
	int n;
	double a,b;
	scanf("%d",&n);
	if(n%2==0){
		a=n*1.5;
		printf("%.0f\n",a);}
		else
		{
			b=n*1.5+0.5;
			printf("%.0f\n",b);
		}

	return 0;
}