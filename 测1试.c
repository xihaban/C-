#include<stdio.h>
#include<math.h>
int main()
{
    int a[100]; int i, j,n,temp;
    while ( scanf("%d",&n)!= EOF )
    {
		
		if(n!=0)
		{
            for ( i = 0; i < n ; i++ )
                scanf("%d",&a[i]);
            for ( i = 0; i < n; i++ )
            {
				
                for ( j = i; j < n; ++j )
                {
                    if ( fabs(a[j])> fabs(a[i]))
						
                    {   temp = a[j];
					a[j] = a[i];
					a[i] = temp;}
                }
				
            }
            printf("%d",a[0]);
			for ( i = 1; i < n; i++ )
			{
				printf(" %d",a[i]);
				
			}   printf("\n");
        }
		else return 0;
	}
	
	
	
}