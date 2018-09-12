#include<stdio.h> //斐波那契数列，头两项是0，1，以后后面一项是前两项的和。
void main()
{
	int u[100]={0,1},i;//对f[0]和f[1]分别赋值
	for(i=2;i<30;i++)
		u[i]=u[i-1]+u[i-2];//求其他各元素的值
	for(i=0;i<30;i++)
	{
	 	if(i%5==0)
		printf("\n");//控制变行，每行输入五个值
		printf("%12ld",u[i]);
	}
		printf("\n");
		
}