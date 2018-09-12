#include <stdio.h>
main()
{
    int x,a,b,c;
    for(x=100;x<=999;x++)
        {
    a=x/100;
    b=x%100/10;
    c=x%10;
    if(x==a*a*a+b*b*b+c*c*c)
        printf("%d\n",x);
    }
    
}