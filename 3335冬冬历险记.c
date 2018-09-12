#include<stdio.h>
main()
{
	int m,n,a[30]={0},i,count=0;
//	freopen("in.txt","r",stdin);
	scanf("%d%d",&n,&m);
	for(i=1;i<m ;i++)
	{	scanf("%d",&a[i]);
		if(a[i]>0&&a[i]<500)
			{
				if(a[i]-a[i-1]<=n)
				count++;
					else	break;
				}
	else break;
	}
	printf("%d\n",count);



}