#include<stdio.h>
main()
{
	int c[100],j,a,b,i=0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)
			break;
		else {
			c[i]=a+b;
			i++;}
	}for(j=0;j<i;j++)
	printf("%d\n",c[j]);
}