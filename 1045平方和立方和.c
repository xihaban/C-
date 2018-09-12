#include<stdio.h>
int str1(int a)
{
	return a*a;

}
int str2(int b)
{
	return b*b*b;
}
main()
{
	int a,b,m,n,i,sum1=0,sum2=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(i%2==0){
			a=str1(i);
				sum1+=a;
		}
		else{
			b=str2(i);
			sum2+=b;}
	}
	printf("%d %d",sum1,sum2);

}