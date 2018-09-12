#include<stdio.h>
 int main()
{

	int h,l,n,a[100],i,b=0;
 //freopen("in.txt","r",stdin);
	scanf("%d%d%d",&h,&l,&n);
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
		if(a[i]<=h+l)
			b++;
	}
	printf("%d\n",b);
//	fclose(stdin);
	
}