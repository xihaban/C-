#include<stdio.h>
main()
{
	int a,count=1;
long int n;
	scanf("%ld",&n);
//	printf("%ld",n);
	while(n!=0){
		a=n%10;
        n = n/10;
        if((n-5*a)%17 == 0)
			printf("1\n");
		else printf("0\n");
		if(count==10)break;
		scanf("%ld",&n);
		count++;		
	}	
}