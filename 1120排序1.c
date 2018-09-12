#include<stdio.h>
main()
{
	int a[4],i,t,j,f=0;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
		for(j=i;j<4;j++)
		{
			if(a[i]>a[j])
			{	t=a[i];
			a[i]=a[j];
			a[j]=t;}

		}
		for(i=0;i<4;i++){
			if(f==0){
			printf("%d",a[i]);
			f=1;}
			else printf(" %d",a[i]);}
		printf("\n");

}