#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int x,a,b,count=0;
	srand(time(NULL));
	a=rand()%10+1;
	b=rand()%10+1;
	printf("%d*%d=?",a,b);
	printf("\n");
	do{
		scanf("%d",&x);
	    count++;
	    if(a*b==x)
        	printf("Ringht!\n");
		else
		{	if(count==4)
			{
				printf("Wrong!You have tried three times!Tes over!\n");	break;
			}
				else
					printf("Wrong!Please try again.\n");
		}
	}	while(a*b!=x&&count<4);
}