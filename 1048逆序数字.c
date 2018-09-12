#include<stdio.h>
main()
{
	int n,x;
	scanf("%d",&n);
	do{
			x=n%10;
			n=n/10;
			printf("%d ",x);
	}while(n!=0);
	printf("\n");
}

  
	
	  
#include<stdio.h>
int main()
{
	int m,b[100],i=0,a,j;
	scanf("%d",&m);
	while(m!=0)
	{
		a=m%10;
		m=m/10;
		b[i]=a;
		i++;
	}j=i;
for(i=0;i<j;i++)
printf("%d ",b[i]);
printf("\n");
return 0;
}