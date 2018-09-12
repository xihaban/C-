#include<stdio.h>
main()
{
	int i,j,g,k,num,num1,num2,num3,a,b,c;	
	for(i=100;i<1000;i++)
	{	a=i/100;b=i%100/10;c=i%10;
		num1=1;num2=1;num3=1;
		for(j=1;j<=a;j++)
			num1=num1*j;
		for(g=1;g<=b;g++)
	    	num2=num2*g;
		for(k=1;k<=c;k++)
		    num3=num3*k;
		num=num1+num2+num3;
		if(i==num)
			printf("%d\n",num);
	}		
}