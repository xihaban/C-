#include<stdio.h>
int main()
{
int x,a,b,c,d,e,f;
	
	scanf("%d",&x);
	if(x>99999||x<0)
	{
	printf("Invalid input\n");
	}
	else if(x>0&&x<10)
	{
		printf("1\n%d\n",x);
	}
	else if(x==10)
		printf ("2\n01\n");
    else if(x<100)
	{
		a=x/10;
        b=x%10;
    	printf("2\n%d\n",b*10+a);
	}
		
	else if(x==100)
		printf ("3\n001\n");
	else if(x<1000)
	{
 		a=x/100;
		b=x%100/10;
		c=x%10;
		printf("3\n%d\n",c*100+b*10+a);
	}
	else if(x==1000)
		printf ("4\n0001\n");
	else if (x<10000)
	{
		a=x/1000;
		b=x%1000/100;
		c=x%100/10;
		d=x%10;
		printf ("4\n%d\n",d*1000+c*100+b*10+a);
	}
	else if(x==10000)
		printf ("5\n00001\n");
    else if(x<100000)
	{
		b=x/10000;
		c=x%10000/1000;
		d=x%1000/100;
		e=x%100/10;
		f=x%10;
		printf("5\n%d\n",f*10000+e*1000+d*100+c*10+b);
	}
	return 0;
}