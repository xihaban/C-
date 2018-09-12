#include<stdio.h>
 void main()
 {
	 int m,n,x=0;
	 scanf("%d",&n);
	 m=n;
	 while(n)
	 {
		 x=x*10+n%10;
		 n=n/10;
	 }
	 if(x==m)
		 printf("Yes\n");
	 else printf("No\n");
 }
