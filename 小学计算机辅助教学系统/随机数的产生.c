#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	srand(1);   //  �����������
	n=rand()%10+1;  //��1-10֮������һ�������
	printf("%d\n",n);
}