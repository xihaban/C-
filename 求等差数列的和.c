#include<stdio.h>
void main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",((y-x)/z+1)*(x+y)/2);
}
