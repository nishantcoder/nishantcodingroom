#include <stdio.h>

int main() 
{
    int n, i, missing,j;
    scanf("%d", &n);

    int box[n-1];
    for(i = 0; i < n-1; i++) 
	{
        scanf("%d", &box[i]);
    }

    missing = 0;
    /*for(i = 1; i <= n; i++) 
	{
		if (missing==i)
        {
        	continue;	
		}
		else
		{
			missing = i;
        	printf("Missing number is %d",missing);
		}
    }*/

    for(j = 0; j < n-1; j++) 
	{
		if (box[j]!=i)
		{
			printf("Missing number is %d\n",i);
		}
        //missing = box[i];
    }

    printf("%d", missing);

    //printf( "is the missing    number in the box" );

}