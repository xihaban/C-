#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	if(a>999&&a<10000)	
	{	
		b=a/1000;
		c=a%1000/100;
		d=a%1000%100/10;
		e=a%1000%100%10;
		f=b+c+d+e;
		if(f%2==0)
		{	
			printf("Yes\n");
		}
		else 
		{
			printf("No\n");

		}
		
	}
		else
	{
			printf("Invalid data\n");
	}
	

	return 0;
}