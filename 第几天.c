#include<stdio.h>  
#include<string.h>  
int isRuiNian(int year)  
{  
    if((year%400==0)||(year%4==0&&year%100!=0))  
		return 1;  
    else return 0;  
}  
int main()  
{  
    int y[100];  
    char str[100]=NULL;  
    while(scanf("%s",&str[100]))  
    {     
		
        int i,j,sum=0,temp=0,len;  
		len=strlen(str);  
        for(i=0,j=0;i<len;i++)  
        {  
            if(str[i]=='/')  
			{  
				y[j]=temp;  
				temp=0; 
				j++;
			}  
            else  
                temp=temp*10+str[i]-'0';  
        }  
        y[2]=temp;  
        for(i=1;i<y[1];i++)  
        {  
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)  
				sum+=31;  
            else   
            {  
                if(i==2)  
                {  
                    if(isRuiNian(y[0]))  
						sum+=29;  
                    else  
						sum+=28;  
                }  
                else  
					sum+=30;  
            }  
        }  sum+=y[2];  printf("%d\n",sum); sum=0;  str[100]=NULL;
	}  
    return 0;  
}  
