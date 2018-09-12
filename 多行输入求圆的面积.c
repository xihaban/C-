#include <stdio.h>
#define PI 3.1415
 main()
{
    int n,i;
   float r;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%f",&r);
        printf("%f\n",PI*r*r);
		n--;
    }

}
