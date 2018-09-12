#include <stdio.h>
int main()
{
    int count=1,n=0,flag,a[20]={0},j,m=0,i;
    while(scanf("%d",&n)!=EOF&&count<=50)
    {
		if(n==0){ printf("0-->0\n");}
		else{
			m=n;
			flag=1;
			if(n<0) { n=-n; flag=0;  }
			j=0;
			while(n!=0){
				a[j] = n%2;
				n = n/2;
				j++;
			}
			printf("%d-->",m);
			if(flag == 0) printf("-");
			for(i=j-1; i>=0; i--)
			{ printf("%d",a[i]);
			} count++;printf("\n");
			
		}
	}
	
}