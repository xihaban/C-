#include <stdio.h>
  void main ()
{	
char ch;
	scanf("%c",&ch);
  if(ch>='a'&&ch<='z')
	  printf("small letters\n");
else if(ch>='A'&&ch<='Z')
	  printf("capital letters\n");
  else if(ch>='0'&&ch<='9')
	  printf("figures\n");
  else
	  printf("others\n");
  }
