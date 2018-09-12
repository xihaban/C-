/*#include<stdio.h>
main()
{
long int a,b,m;
int x,n[100],i,j=0;
scanf("%ld %ld %d",&a,&b,&x);
if(a>0&&b>0)
{
m=a+b;
do{
n[j++]=m%x;
m=m/x;

		}while(m>0);
		for(i=j-1;i>=0;i--)
		printf("%d",n[i]);
		
printf("\n");}*/




#include <stdio.h>


int main() 

{
	int num[40] = {0};
	int A, B, D, n, j=0,i=0;
	scanf("%d%d%d", &A, &B, &D);
	n = A + B;
	if(A>0&&B>0)
	{
		while(n != 0) {
			num[i ++] = n % D;
			n = n / D;
		}
		
		for(j=i-1; j >= 0; j --) 
		{
			printf("%d", num[j]);
		}

		printf("\n");}
	
	return 0;
}
  
