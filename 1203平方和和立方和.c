#include<stdio.h>
main()
{
	int m,n,i,j,num=0,sum=0;
	//freopen("in.txt","r",stdin);
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=n;i<=m;i++)
		{
			if(i%2==0)
				num=num+i*i;
			else sum=sum+i*i*i;
		}
		printf("%d %d\n",num,sum);
		sum=0;num=0;
	}
}