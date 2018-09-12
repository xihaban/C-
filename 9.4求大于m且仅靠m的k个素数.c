
#include <stdio.h>
int fun(int m,int n,int zz[1000])
{
	int i,g,count=0;
		for(g=2;g<m/2;g++)
		{	for(i=0;i<=n;i++)
				if(m%g==0)break;
				if(m==g) zz[i]==g;
		
		}
		

	return zz[n];
}


int main()
{
    int m,n,zz[1000];
    scanf("%d%d",&m,&n);
    fun(m,n,zz);
    for(m=0;m<n;m++)
        printf("%6d",zz[m]);
    printf("\n");
    return 0;
}