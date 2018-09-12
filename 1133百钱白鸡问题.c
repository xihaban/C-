#include<stdio.h>
main()

{
	int x,y,z=0;
	for(x=0;x<21;x++)
		for(y=0;y<34;y++)
			for(z=0;z<100;z++)
				{
					if(	x+y+z==100&&15*x+9*y+z==300)
						printf("cock=%d,hen=%d,chicken=%d\n",x,y,z);
		}
}