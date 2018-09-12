#include <stdio.h>
char (char str ,char ch);
char  fun(char str1,char ch)
{
	int i;
	char str[80]; 
	for(i=0;i<80;i++)
	{
		
		if(str1[i]=='ch')
			continue;
		else str[i]=str1[i-1];
	}
	return str[80];
}

int main()
{
    char str[80];
    char ch;

    gets(str);
    scanf("%c",&ch);
    fun(str,ch);
    printf("%s\n",str);
    return 0;
}
