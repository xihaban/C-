#include<stdio.h>
main()
{
	char max,a[3];
	int i;
	scanf("%c %c %c",&a[0],&a[1],&a[2]);
	max=a[0];
	for(i=0;i<3;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%c\n",max);

	
}