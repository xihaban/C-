#include<stdio.h>
main()
{
	int a[10],i,j,t;
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<8;i++)
		for(j=i+1;j<9;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		for(i=0;i<9;i++)
			printf("%4d",a[i]);

}