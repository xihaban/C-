#include<stdio.h>
 main ()
{
	int n;
	scanf ("%d",&n);
	if(n%4==0&&n%100!=0||n%400==0)
		printf("����\n");
	 else 
		 printf("ƽ��\s");
	 
}