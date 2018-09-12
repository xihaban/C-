#include<stdio.h>
main(){

	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=0;j<i-1;j++)
			printf(" ");
		for(k=1;k<=11-2i;k++)
			printf("*");
	}

}