#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int x,a,b,count=0,count1=0,count2=0;
	do {
		srand(time(NULL));
    	a=rand()%10+1;
    	b=rand()%10+1;			//产生随机数a和b
		switch(rand()%4+1)		//通过switch语句选择随机的运算类型式
		{
		case 1: printf("%d+%d=?",a,b);count++;
			printf("\n");
			scanf("%d",&x);	
			if(a+b==x)
			{
		    	printf("Ringht!\n");
	            count1++;}
	         else 
			 {
				printf("Wrong!\n");
				count2++;}
			case 2: printf("%d-%d=?",a,b);count++;
				printf("\n");
				scanf("%d",&x);				
				if(a-b==x)
				{
					printf("Ringht!\n");
					count1++;}
				else
				{
					printf("Wrong!\n");
					count2++;}
				case 3: printf("%d*%d=?",a,b);count++;
					printf("\n");
					scanf("%d",&x);	
					if(a*b==x)
					{
						printf("Ringht!\n");
						count1++;}
					else
					{
						printf("Wrong!\n");
						count2++;}
			    case 4: printf("%d/%d=?",a,b);count++;
						printf("\n");
						scanf("%d",&x);	
						if(a/b==x)
						{
							printf("Ringht!\n");
							count1++;}

					    else
						{
							printf("Wrong!\n");
							count2++;}
		}
	}while(count<10);
	printf("总成绩为%d分。\n",count1*10);
	printf("该学生的回答正确率为%%%d。\n",count1*10);
}