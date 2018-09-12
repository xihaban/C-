 #include <stdio.h>
main()
{
	int z=0,x,i=0;
	scanf("%d",&x);
  while(i<3)
	{
		z=10*z+x%10;
		x=x/10;
		i++;
	}
	printf("%d\n",z);
} 
