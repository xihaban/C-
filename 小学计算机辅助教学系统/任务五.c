#include<stdio.h>
#include<time.h>				//将time()所需要的头文件time.h包含到程序中
#include<stdlib.h>				//将rand()所需要的头文件stdlib.h包含到程序中
main()
{
	int x,a,b,count=0,count1=0,count2=0;
l:	do {
		srand(time(NULL));		//为函数rand()设置随机数种子。time(NULL)的返回值被转换为一个无符号整数，可作为随机数发生器的种子。
    	a=rand()%10+1;
    	b=rand()%10+1;			//产生随机数a和b
		switch(rand()%4+1)		//通过switch语句选择随机的运算类型式
		{
		case 1: printf("%d+%d=?",a,b);count++; //  count计数器统计做的题目的个数。
			printf("\n");
			scanf("%d",&x);	//输入答案
			if(a+b==x)
			{
		    	printf("Ringht!\n");
				count1++;}		// count1计数器统计题目正确的个数。
	         else 
			 {
				printf("Wrong!\n");
				count2++;}   	// count2计数器统计题目错误的个数。
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
      if(count1<7)					//	正确的答案少于7个，正确率不足75%，重做。
	  {   printf("正确率太低，请再做一遍!\n");
		  count=0;count1=0;count2=0;//重做题目，计数器归零。
		  goto l;					//由于正确率低，使用goto语句，转到程序do开头。
	  }
	  else{
		  printf("总成绩为%d分。\n",count1*10);
		  printf("该学生的回答正确率为%%%d。\n",count1*10);}
}