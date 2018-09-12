#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	int n,i,m,count1=0,count2=0,count3=0,count4=0;
	//freopen("in.txt","r",stdin);
	scanf("%d",&m);
	while(scanf("%s",a)!=EOF&&m!=0&&a!='\n'){
	n=strlen(a);
	if(n>=8&&n<16)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>=97&&a[i]<=122)
			{
				if(count1==1)
				continue;
				else
				count1++;}
			 if(a[i]>=65&&a[i]<=90)
			 {if(count2==1)
				continue;
				else
				count2++;}
			 if(a[i]>=48&&a[i]<=57)
			 {if(count3==1)
				continue;
				else
				count3++;}
			  if(a[i]>=35&&a[i]<=37||a[i]==33||a[i]==64||a[i]==94||a[i]==126)
			  {if(count4==1)
				continue;
				else
				count4++;}
		}
		if(count1+count2+count3+count4>=3)
			printf("YES\n");
		else printf("NO\n");
		count1=0;
		count2=0;count3=0;count4=0;
	}
	else printf("NO\n");
	m--;
	}

}