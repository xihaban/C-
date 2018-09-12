#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	srand(1);   //  设置随机种子
	n=rand()%10+1;  //在1-10之间生成一个随机数
	printf("%d\n",n);
}