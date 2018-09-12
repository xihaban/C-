#include<stdio.h>
int main( )
 {
	int m,k,x,y,b,sum;
	scanf("%d%d",&m,&k);
	x=m/k; 
	b=m%k;
	sum=m+x;
	x=x+b;
	 do{y=x/k;
	    b=x%k;
		sum=sum+y;
	 	x=y+b;}while(y!=0);
	printf("%d\n",sum);
}
