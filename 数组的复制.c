#include<stdio.h>
#include<string.h>
main()
{
	int a[11]={1,3,5,7,9},b[]={2,4,6,8,10},t;
	int i,j;
	for(i=5;i<11;i++){
		a[i]=b[i-5];
	}	
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		for(i=0;i<10;i++)
			printf("%d ",a[i]);
		printf("\n");
}