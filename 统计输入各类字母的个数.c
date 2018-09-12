#include <stdio.h>
void main()
{
	int i,x=0,y=0,c=0,d=0;
	char ch;
	for(i=1; ;  )
	{
		scanf("%f",&ch);
		if(ch==35)
			break;
		else if(ch<='Z'&&ch>='A')
			x=x++;
		else if(ch>='a'&&ch<='z')
			y=y++;
		else if(ch>='0'&&ch<='9')
			c=c++;
		else 
			d=d++;
		 printf("%d\n%d\n%d\n%d",x,y,c,d);
	}
   
}