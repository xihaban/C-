#include<stdio.h>
main()
{
	int year ;
		scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
		printf("���꣡\n");
		else 
			printf("�������꣡\n");
}