#include<stdio.h>
main()
{
	int a,b,c;
	printf("请分别输入三个边的边长：   \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c||a+c>b||c+b>a)
	{
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("可以构成一个直角三角形！\n");
		else 
			if(a==b&&b==c)
				printf("可以构成一个等边三角形！\n");
			else
				if(a==b||b==c||a==c)
					printf("可以构成一个等腰三角形！\n");
				else 
					printf("可以构成一个普通三角形！\n");
	}
	else 
		printf("您的三个边长输入构不成三角形！\n");

}