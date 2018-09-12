#include<stdio.h>
  void main()
{
	int u[100]={0,1},i,n;
	for(i=2;i<30;i++)
		u[i]=u[i-1]+u[i-2];
	scanf("%d",&n);
	printf("%d\n",u[n-1]);

}