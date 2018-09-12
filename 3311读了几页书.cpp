#include<stdio.h>
  int main()
{
	int x, m,n,i,k=0;
	scanf("%d%d%d",&x,&m,&n);
	for(i=1;i<=n;i++)
	{	k=k+x;
		x=x+m;
	}
	printf("%d\n",k);

}
