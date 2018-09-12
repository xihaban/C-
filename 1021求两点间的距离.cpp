#include<stdio.h>
#include<math.h>
int  main()
{
	int x1,x2,y1,y2;
	float a,b,l;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(x1<=100&&0<=x1&&y1<=100&&0<=y1&&x2<=100&&0<=x2&&y2<=100&&0<=y2)
	{
	    a=fabs(x1-x2);
	    b=fabs(y1-y2);
        l=sqrt(a*a+b*b);
	    printf("%.2f\n",l);
	}
	else printf("ÄãµÄÊäÈëÓÐÎó");
    return 0;
}
