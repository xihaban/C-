#include<stdio.h>
#include<string.h>
main()
{	char a[100];
	int i,l,num=1,sum=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		sum=sum+(a[i]-'0')*num;
			num=num*2;
	}
	printf("%d\n",sum);
		if((int)sum%4==0&&(int)sum%100!=0||(int)sum%400==0)
			printf("Yes\n");
		else printf("No\n");
		
}