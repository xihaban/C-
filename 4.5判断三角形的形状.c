#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	 if(a+b<=c||a+c<=b||c+b<=a)					 /*�Ƿ񹹳�������*/
	{
		printf("non-triangle.\n");
	}	
	  else if(a==b&&b==c&&c==a)					 /*���ж��Ƿ�Ϊ�ȱ�������*/
	{
		printf("equilateral triangle.\n");
	}
	 else  if (a==b||b==c||c==a)				/*���ж��Ƿ�Ϊ����������*/
	{
		printf ("isoceles triangle.\n");
	}

	 else if(a+b>c&&b+c>a&&c+a>b)				/*��������ͨ������*/
	{
		printf("triangle.\n");
	}
 return 0;
}