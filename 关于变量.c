#include<stdio.h>
int a=20;
void func2()
{
	static int i=3;
	int k=0;
	i++;
	k++;
	printf("func2 i=%d,k=%d,a=%d\n",i,k,a);
	a++;
}
int main()
{   a=20;

	func2();
	func2();
}