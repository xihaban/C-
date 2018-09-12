/*#include<stdio.h>
main()
{
	int *p,q;
	printf("please input :\n");
	scanf("%d",&q);
		p=&q;
		printf("the number is:\n");
	printf("%d\n",q);
}
*/
#include<stdio.h>
main()
{
	int *p,q;
	p=&q;
	printf("please input :\n");
		scanf("%d",p);
	printf("the number is:\n");
	printf("%d\n",q);
}//运行结果一样