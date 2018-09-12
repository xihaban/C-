#include<stdio.h>
int main(){
	int i=0,m,k,sum=0;
	scanf("%d%d",&m,&k);
	if(2<=k && k<=m &&k<=1000){
		while(m>0){
			m--;
			i++;
			if(i == k){
				m++;
				i=0;
			}
			sum++;
		}
	}
	printf("%d\n",sum);
	return 0;
}