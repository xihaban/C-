#include<stdio.h>
#include<stdlib.h>
#include<time.h>  //������time()����Ҫ��ͷ�ļ�time.h�����������С�
void main()
{
	int n;
	srand(time(NULL)); //Ϊ����rind()����������ӡ�
	n=rand()%10+1;
	printf("%d\n",n);
}








/*#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void main()
{
	int n,i;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		n=rand()%10+1;
		printf("%d\n",n);
	}
}