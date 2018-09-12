#include<stdio.h>
main()
{
	int n,m,x=0,max=0,sum=0;
	scanf("%d",&n);
	if(n<=10&&n>=1){
	while(n>0){
		scanf("%d",&m);
		
		while(m>0&&m<65536){		
			
			x=m%10;
			m=m/10;	
			if(x>max)
			{
				max=x;
			}	
		}	
		sum=sum*10+max;
		max=0;
		n--;
	}
	printf("%d\n",sum);
	}
	
}