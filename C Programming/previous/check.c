#include <stdio.h>
int main()
{
    int i,n,flag=0,j,count=0;
    //printf("Enter a number : \t");
    //scanf("%d",&n);
    for(i=1; i<=100; i++)
	 {
		flag = 0;
		for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
				    flag=1;
				    break;
			   }
		  }
		  if(flag==0 && i>=2)
		  {
		   	printf("%d\t",i);
		   	count++;
		  }
        
	 }
	 printf("\n Prime Count = %d", count);
    
}

