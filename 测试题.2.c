#include <stdio.h>

int main()

{

     int a,b;

     while(scanf("%d %d",&a, &b)!=EOF) // �������ʱ��scanf��������ֵΪEOF����û����������ʱ���˳�whileѭ��

     {

         printf("%d\n",a+b);

     }

     return 0;

}