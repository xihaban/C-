#include<stdio.h>
int  main()
{
	int n,sum=0,num=1,i;
	scanf("%d",&n);
	if(n<=20){
			for(i=1;i<=n;i++)
			{
				num=num*i;
				sum=sum+num;
			}
			printf("%d\n",sum);
			return 0;}
	else break;
}