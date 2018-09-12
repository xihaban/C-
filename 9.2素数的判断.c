#include <stdio.h>
int fun(int a)
{
	int b=1,i;
	for(i=2;i<a/2;i++)
		if(a%i==0)
			b=0;
		return (b);	
}
int main()
{
    int a;
    scanf("%d",&a);
    if(fun(a)) printf("Prime\n");
    else  printf("Non Prime\n");
     return 0;
}