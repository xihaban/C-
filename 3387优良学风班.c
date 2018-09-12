#include<stdio.h>
main()
{
	int n,i,a[100],count1=0,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=80)
			count++;
		if(a[i]>=60)
			count1++;
	}
	if(count1*100/n>=95&&count*100/n>=60)
		printf("Yes\n");
	else printf("No\n");

}