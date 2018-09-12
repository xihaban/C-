#include<stdio.h>
main()
{
	int n,i,l,j,f;
	char a[100][100];
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		l=strlen(a[i]);
		for(j=2;j<l;j++)
		{
			if(a[i][j-2]=='G'&&a[i][j-1]=='L'&&a[i][j]=='B')
			     f=1;

		}
		if(f==1){
			printf("YES\n");
		f=0;}
		else printf("NO\n");

	}

}