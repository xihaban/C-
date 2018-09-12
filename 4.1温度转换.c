#include <stdio.h> 
void main() 
{ 
 int a;
 double f,c;
    scanf("%d",&a);
 if(a==1)
 {
     scanf("%lf",&f);
  c=(f-32)*5/9;
  printf("The Centigrade is %.2f\n",c);
 }
 else
 {
     scanf("%lf",&c);
  f=(c*9/5)+32;
  printf("The Fahrenheit is %.2f\n",f);
 }
}