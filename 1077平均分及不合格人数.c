#include<stdio.h>
main()
{
	int a[100],b[100]={0},i,j=0,n,count=0;
	double x,sum=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	x=sum/n;
	printf("%.1lf\n",x);
	for(i=0;i<n;i++)
	{
		if(x>a[i]){
			count++;
			b[j++]=a[i];}
	}
	printf("%d\n",count);
	if(count==0)
		return 0;
	else 
	{ printf("%d",b[0]);
		for(j=1;j<count;j++)
			printf(" %d",b[j]);}

}