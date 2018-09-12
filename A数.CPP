#include<stdio.h>
main()
{
	int n=0,i=1,j=0,x,m=0;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&x);
		while(x!=0){
		i=x%10;
		 x=x/10;
		 if(i>m)	 m=i;
		 
		}
		j=j*10+m;
		n--;
	}
	printf("%d\n",j);
}
