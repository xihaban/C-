#include<stdio.h>
void main()
{	
	int m,n,x=0,y;
	scanf("%d%d",&m,&n);
	for(x=0;x<=m;x++)
	{
		y=m-x;
	    if(2*x+4*y==n)
		printf("%d %d\n",x,y);
	}
}