#include<stdio.h>
main()
{
	int a=1,n,m[12],i,j,min=0;
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	while(a<=n){
		scanf("%d",&j);
		for(i=0;i<j;i++){
			scanf("%d",&m[i]);
		min+=m[i];}
		min=min+(i-2)*8;
		printf("%d\n",min);
		min=0;
	a++;}
}