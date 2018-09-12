#include<stdio.h>

main()
{
	int a[10000],n=0,x,y,i,j,f=0,count;
	scanf("%d%d",&x,&y);
	if(y>=x&&10000>=y){
	for(i=2;i<10001;i++)
	{	for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i){
			a[n]=i;
			n++;}
	}	
		for(i=x;i<=y;i++)
		{
			if(f==0)
			{
				printf("%d",a[i-1]);
				f=1;
				count=1;
			}
			else 
			{
				printf(" %d",a[i-1]);
				count++;
				if(count==10)
				{
					printf("\n");
					f=0;
					count=0;}
			}
			
		}
	}
		printf("\n");
		
		
}