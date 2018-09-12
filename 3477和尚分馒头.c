#include<stdio.h>
main()
{
	int n,a,i,j;
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);	
	while(n>0){
		scanf("%d",&a);
		for(i=0;i<=a;i++)
		{       j=a-i;
			if(i*3+j/3==a)
				printf("%d %d\n",i,j);
	
		
		
		}
		n--;
		
	}
}