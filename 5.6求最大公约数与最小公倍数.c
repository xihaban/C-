#include<stdio.h>
void main()
{
	int a,b,num1,num2,x;
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		a=num1;
		b=num2;
	}
	else {
	
		b=num1;
		a=num2;
	}
	while(b!=0)
	{
		x=a%b;
		a=b;
		b=x;
	}
	printf("the greatest common divisor is %d\n",a);
    printf("the least common multiple is %d\n",num1/a*num2);
}