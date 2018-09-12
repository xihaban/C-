#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	scanf("%d",&num);
	a=num%10;
	b=num/10%10;
	c=num/100;
	if(b==0&&c==0)
		d=num-a/5;
	else if(b!=0&&c==0)
		      d=num-10-a/5-(b-1);
	      else
			  d=num-c*10-c*9-a/5-c/5*100;
	printf("%d\n",d);
	return 0;
}
