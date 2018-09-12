#include<stdio.h>
void main()
{	
	int x,y,z;
	for(x=0;x<20;x++)
		for(y=0;y<33;y++)
			for(z=0;z<100;z++)
		{
		     if(15*x+9*y+z==300&&x+y+z==100)
			{
		    
		     	printf("cock=%d,hen=%d,chicken=%d\n",x,y,z);
			
			 }
		}
		
}