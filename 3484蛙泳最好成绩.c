#include<stdio.h>
main()
{
	
	int i,j,n,b,c,x,y,m[7],min=100;
freopen("in.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=7;i++)
	{
		scanf("%d:%d %d:%d",&c,&b,&x,&y);
		m[i]=(x*60+y)-(c*60+b);
	}
	for(i=1;i<=7;i++)
	{	if(m[i]<min)
			{
			min=m[i];
			j=i;
			}
	}
	switch((n+j-1)%7){
	
	case 1:printf("Monday %d\n",min);break;	
	case 2:printf("Tuesday %d\n",min);break;	
	case 3:printf("Wednesday %d\n",min);break;	
	case 4:printf("Thursday %d\n",min);break;	
	case 5:printf("Friday %d\n",min);break;	
	case 6:printf("Saturday %d\n",min);break;	
	case 7:printf("Sunday %d\n",min);break;	
	}
	

		
		
		
		
		
}
