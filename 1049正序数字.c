#include<stdio.h>
int main()
{
	int m,b[100],i=0,a,j;
	scanf("%d",&m);
	while(m!=0)
	{
		a=m%10;
		m=m/10;
		b[i]=a;
		i++;
	}j=i;
for(i=j-1;i>=0;i--)
printf("%d ",b[i]);
printf("\n");
return 0;
}