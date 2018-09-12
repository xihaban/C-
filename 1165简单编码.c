#include<stdio.h>
#include<string.h>
main()
{
	char  a[10];int x,i;
	while(scanf("%s",&a)!=NULL){
		if((strcmp(a,"END"))==0) break;
	
		x=strlen(a);
		
		for( i=0;i<x;i++){
			if(a[i]=='A'||a[i]=='W'||a[i]=='F')
				a[i]='I';
			else if(a[i]=='C')  a[i]='L';
			else if(a[i]=='M')  a[i]='o';
			else if(a[i]=='S')   a[i]='v';
			else if(a[i]=='D'||a[i]=='p'||a[i]=='G'||a[i]=='B')
				a[i]='e';
			else if(a[i]=='L') a[i]='Y';
			else if(a[i]=='X')  a[i]='u';

		}
		printf("%s\n",a);
	
		a==NULL;


		
	}
}