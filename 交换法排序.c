#include<stdio.h>
main()
{
	int k,m,t,i;
	int a[10]={5,6,3,9,5,4};
	for(m=0;m<6-1;m++)
		for(k=m;k<6;k++)
		{
			if(a[k]>a[m])
			{
				t=a[m];
				a[m]=a[k];
				a[k]=t;
			}
				for(i=0;i<6;i++)
				printf("%d ",a[i]);
			printf("\n");
		
		}
		
}