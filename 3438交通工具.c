#include<stdio.h>
int main()
{   
     int n,i=0,b1,c1,d1;
     float   b[100],c[100],d[100];  
     while(scanf("%d %f %f %f",&n,&b[i],&c[i],&d[i])!=EOF)    
   {  
                                                 
               if(n<=5)                           
                    b[i]=b[i]+c[i];                                       
               else if(n<=10)
                    b[i]=b[i]*0.6+c[i];            
               else if(n<=20)
                    b[i]=b[i]*0.5+c[i];
               else if(n<=31)
                    b[i]=b[i]*0.3+c[i];
            if((b1=(int)(b[i]+0.5))>(int)b[i])
               b1=(int)b[i]+1;
            else
               b1=(int)b[i];
            if((d1=(int)(d[i]+0.5))>(int)d[i])
               d1=(int)d[i]+1;
            else
               d1=(int)d[i];
            if(b1>=d1)
            printf("Train %d\n",d1);
            else
            printf("Airplane %d\n",b1);
            i++;
   }            
     return 0;
}
