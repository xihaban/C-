#include<stdio.h>
#include<string.h>
main()
{
	int n,i,j,t;
	char str1[50],str2[20];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	n=strlen(str1);
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			if(str1[i]>str1[j])
			{
				t=str1[i];
				str1[i]=str1[j];
				str1[j]=t;
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%c",str1[i]);
		}
		printf("\n");
		
}