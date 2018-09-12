#include <stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=n-1; i>=1; i--)
    {
        sum=(sum+i)*2;
    }
    printf("The monkey got %d peachs in first day.\n",sum);
    return 0;
}
