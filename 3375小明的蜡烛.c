#include<stdio.h>
main()
{
	int m,k,i=0,sum=0;
	scanf("%d%d",&m,&k);
	while(m>0){
		m--;
		i++;
		if(i==k){
			m++;
			i=0;
		}
		sum++;
	}
	printf("%d\n",sum);

}