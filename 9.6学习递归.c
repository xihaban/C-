#include <stdio.h>
int fun( int n,int m)
{
	if(n==m)
		return m;
	else
	 return (n+fun(n+1,m));
}
int main()   
{   
    int m,n,s;   
    scanf("%d%d",&n,&m);   
    s=fun(n,m);   
    printf("%d\n",s); 
    return 0;  
}
