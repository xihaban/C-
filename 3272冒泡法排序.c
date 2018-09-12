#include<stdio.h>
main()
{
	int m,n,i,j,t,a[100],f=0;
	freopen("in.txt","r",stdin);
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n;i++)
	{	for(j=0;j<m-i;j++)
			if(a[i]>a[j]){
				t=a[j];
				a[j]=a[i];
				a[i]=t;}			
		
	}for(i=0;i<m;i++)
		printf("%d ",a[i]);
	printf("\b\n");

}