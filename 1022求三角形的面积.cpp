#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,l,s;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
		l=(a+b+c)/2;
		s=sqrt(l*(l-a)*(l-c)*(l-b));
		printf("%.2f\n",s);
	}
		else printf("ÄãÊäÈëÓĞÎó!");
}