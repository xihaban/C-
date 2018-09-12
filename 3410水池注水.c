#include<stdio.h>
main()
{
	int n,m,i,count;
	double sum;
	while(scanf("%d%d",&n,&m)!=EOF&&n!=0&&m!=0){
			sum=0;
			count=0;
		for(i=1;i<m+n;i++)
		{
			sum+=1.0/n;
			count++;
			if(sum>=1)
			{	printf("%d\n",count);break;}
			sum+=1.0/m;
			count++;
			if(sum>=1)
			{	printf("%d\n",count);break;}
		}
	}
}