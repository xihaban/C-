#include<stdio.h>
main()
{
	int a,b,c;
	printf("��ֱ����������ߵı߳���   \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c||a+c>b||c+b>a)
	{
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("���Թ���һ��ֱ�������Σ�\n");
		else 
			if(a==b&&b==c)
				printf("���Թ���һ���ȱ������Σ�\n");
			else
				if(a==b||b==c||a==c)
					printf("���Թ���һ�����������Σ�\n");
				else 
					printf("���Թ���һ����ͨ�����Σ�\n");
	}
	else 
		printf("���������߳����빹���������Σ�\n");

}