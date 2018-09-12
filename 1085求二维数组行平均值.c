#include<stdio.h>
main()
{

	int i,j,a[3][3];
	double sum=0;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);}
	for(j=0;j<3;j++)
	{	for(i=0;i<3;i++)
			sum+=a[j][i];
		printf("%.1lf\n",sum/3.0);
		sum=0;}
}