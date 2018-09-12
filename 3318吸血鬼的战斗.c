#include<stdio.h>
main()
{
	int x,y,a,b,i;
	freopen("in.txt","r",stdin );
	scanf("%d %d %d %d",&x,&y,&a,&b);
	while(x!=0||a!=0){
		x=x-b;
		a=a-y;
	
	}
		if(a==0)
		{
		printf("LOSE\n");
		break;}
	if(x==0)
		{
		printf("WIN\n");
		break;}

}