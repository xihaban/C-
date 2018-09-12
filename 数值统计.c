#include<stdio.h>
void main()
{
	int n,m,a=1,count1=0,count2=0,count3=0;
	scanf("%d",&n);
	while(a<=n)
	{
		scanf("%d",&m);
		if(m<0)
			count1++;
		else if(m==0)
			count2++;
		else count3++;
			a++;
	}
	printf("%d %d %d\n",count1,count2,count3);
}
