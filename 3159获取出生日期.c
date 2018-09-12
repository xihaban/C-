#include<stdio.h>
main()
{
	int n,i,j;
	char a[50];
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	do{
		scanf("%s",a);
		printf("%c%c%c%c-%c%c-%c%c\n",a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
		n--;
	}while(n>0);
		
	
}