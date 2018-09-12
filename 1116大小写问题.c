#include<stdio.h>
int main()
{
	char a[100];
	int i=0,b,j;
	scanf("%c",&a[i]);
	while(a[i]!='\n'){
			i++;
			 b=i;
		scanf("%c",&a[i]);
	}
	for(j=0;j<b;j++)
	{
		if(a[j]>=65&&a[j]<=90)
		{
			a[j]=a[j]+32;
			printf("%c",a[j]);
		}
	   else printf("%c",a[j]);	
	}
	printf("\n");
	return 0;
}