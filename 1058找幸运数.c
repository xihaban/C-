#include<stdio.h>
main()
{
	int n,sum=0,a,k;
	scanf("%d",&n);
	k=n;
	while(n!=0){
	
		sum=sum*10+n%10;
		n=n/10;

	}
	if(k==sum)
		printf("yes\n");
	else printf("no\n");

}