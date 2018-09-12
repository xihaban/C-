#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	 if(a+b<=c||a+c<=b||c+b<=a)					 /*是否构成三角形*/
	{
		printf("non-triangle.\n");
	}	
	  else if(a==b&&b==c&&c==a)					 /*先判断是否为等边三角形*/
	{
		printf("equilateral triangle.\n");
	}
	 else  if (a==b||b==c||c==a)				/*再判断是否为等腰三角形*/
	{
		printf ("isoceles triangle.\n");
	}

	 else if(a+b>c&&b+c>a&&c+a>b)				/*最后就是普通三角形*/
	{
		printf("triangle.\n");
	}
 return 0;
}