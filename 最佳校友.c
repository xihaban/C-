#include <stdio.h>

int main()
{
	int b[1000]={0},c[1000],a[1000]={0},n=0,i=0,j=0,k=0,max;
	do{
		scanf("%d",&a[n++]);
	}
	while(a[n-1]>0);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]==a[j])
				b[i]++;
		}
	}	
	max=b[0];
	i=0;
	for(j=0;j<n;j++){
		if(max<b[j]){
			max=b[j];
		}
	}
	i=0;
	for(j=0;j<n;j++){
		if(max==b[j]){
			c[i++]=j;
		}
	}
	for(j=0;j<i;j++){
		printf("%d",a[c[j]]);
	}
	
	return 0;
}
