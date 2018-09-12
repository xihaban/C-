#include<stdio.h>
main()
{
	int x,y,a,b,h,j,i;
  freopen("in.txt","r",stdin );
	scanf("%d%d%d%d",&x,&y,&a,&b);
	for(i=x+a;i>0;i--){
		x-=b;
		a-=y;
		if(a==0){
		printf("LOSE\n");
		break;}
		if(x==0){
		printf("WIN\n");
		break;}
	
	};


}