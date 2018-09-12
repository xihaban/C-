#include<stdio.h>
#include<stdlib.h>
#include<time.h>  //将函数time()所需要的头文件time.h包含到程序中。
void main()
{
	int n;
	srand(time(NULL)); //为函数rind()设置随机种子。
	n=rand()%10+1;
	printf("%d\n",n);
}








/*#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void main()
{
	int n,i;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		n=rand()%10+1;
		printf("%d\n",n);
	}
}