#include<stdio.h>
#include<time.h>				//��time()����Ҫ��ͷ�ļ�time.h������������
#include<stdlib.h>				//��rand()����Ҫ��ͷ�ļ�stdlib.h������������
main()
{
	int x,a,b,count=0,count1=0,count2=0;
l:	do {
		srand(time(NULL));		//Ϊ����rand()������������ӡ�time(NULL)�ķ���ֵ��ת��Ϊһ���޷�������������Ϊ����������������ӡ�
    	a=rand()%10+1;
    	b=rand()%10+1;			//���������a��b
		switch(rand()%4+1)		//ͨ��switch���ѡ���������������ʽ
		{
		case 1: printf("%d+%d=?",a,b);count++; //  count������ͳ��������Ŀ�ĸ�����
			printf("\n");
			scanf("%d",&x);	//�����
			if(a+b==x)
			{
		    	printf("Ringht!\n");
				count1++;}		// count1������ͳ����Ŀ��ȷ�ĸ�����
	         else 
			 {
				printf("Wrong!\n");
				count2++;}   	// count2������ͳ����Ŀ����ĸ�����
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
      if(count1<7)					//	��ȷ�Ĵ�����7������ȷ�ʲ���75%��������
	  {   printf("��ȷ��̫�ͣ�������һ��!\n");
		  count=0;count1=0;count2=0;//������Ŀ�����������㡣
		  goto l;					//������ȷ�ʵͣ�ʹ��goto��䣬ת������do��ͷ��
	  }
	  else{
		  printf("�ܳɼ�Ϊ%d�֡�\n",count1*10);
		  printf("��ѧ���Ļش���ȷ��Ϊ%%%d��\n",count1*10);}
}