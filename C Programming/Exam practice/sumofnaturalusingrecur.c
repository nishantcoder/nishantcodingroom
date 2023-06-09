#include <stdio.h>
int sumnatural(int N)
{
    int sum=0;
    
    if (N!=0)
    {
       return sum+sumnatural(N-1);
    }  
}
int main()
{
    printf("%d",sumnatural(5));
}