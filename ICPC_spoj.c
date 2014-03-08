#include<stdio.h>

main()
{
    int a[4],len,i,j,k,l,temp;
    for(j=0;j<2;j++){
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    for ( k = 0 ; k<3 ; k++ )
	{
		for ( l = 0 ; l < 3 - k ; l++ )
		{
			if ( a[l] < a[l + 1] )
			{
				temp = a[l] ;
				a[l] = a[l + 1] ;
				a[l + 1] = temp ;
			}
		}
	}

   len=a[0]+a[1];

    printf("\nCase %d: %d",j+1, len);
    }
    return 0;
}
