#include<stdio.h>
#define n 10
main()
{
	int a[n],i,sum=0,max;
	for(i=0;i<10;i++)
	{	scanf("%d",&a[i]);
	sum=sum+a[i];}
	printf("�ܳɼ�Ϊ%d.\n",sum);
	printf("ƽ���ɼ�Ϊ%.2f.\n",(float)sum/5);
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
			max=a[i];
	}
			printf(" ��߳ɼ�Ϊ%d\n",max);
	
		
	
	
}
