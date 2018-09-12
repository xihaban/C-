#include<stdio.h>
int s(int x);
float f(int x,int y);
int main()
{
	int x,y,m,n;
	float NUM;
	scanf("%d%d",&x,&y);
	m=s(x);
	n=s(y);
	NUM=f(m,n);
	printf("%.2f\n",NUM);
}
int s(int g)
{
	int sum=1,num=0,i;
	for(i=1;i<=g;i++)
	{
		sum=sum*i;
		num=num+sum;
	}
	return num;
}
float f(int num1,int num2)
{
	float NUM;
	NUM=(float)num1/(float)num2;
	return NUM;
}