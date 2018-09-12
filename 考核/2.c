#include<stdio.h>
main()
{
	int a,b,c,d,count=0;;
	for(a=0;a<=15;a++)
		for(b=0;b<=30;b++)
			for(c=0;c<=60;c++)
				for(d=0;d<=300;d++)
				{
					if(20*a+10*b+5*c+d==300)	
						count++;
					
				}
				printf("%d",count);
}