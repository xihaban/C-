#include<stdio.h>
#include<string.h>
main()
{
	char a[60],count1,count2,count3,i,l;
	while(scanf("%s",a)!=EOF)
	{  count1=0;count2=0;count3=0;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='A')
			{
				if(count1==1)
					continue;
				count1=1;
			}
			if(a[i]=='C')
			{
				if(count2==1)
					continue;
				count2=1;
			}
			if(a[i]=='M')
			{
				if(count3==1)
					continue;
				count3=1;
			}
			
		}
		if(count1+count2+count3==3)
				printf("^v^\n");
			else printf("==\n");

	}
}
