#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{	char a[100];
	int i,l,num=1,sum=0,j=1;
	scanf("%s",a);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		sum=sum+(a[i]-'0')*num;
			num=pow(2,j++);//num=num*2;
	}
	printf("%d\n",sum);
		
}