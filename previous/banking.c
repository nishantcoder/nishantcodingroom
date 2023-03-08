#include <stdio.h>
int main()
{
	int tr,run;
	int i=1;
	int amt;
	int sum=0;
	printf("Enter the total number of transactions : \n");
	scanf("%d",&tr);
	for (run=1;run<=tr;run++)
	{
		printf("Enter the transaction amount %d :\n...>>",i++);
		scanf("%d",&amt);
		sum=amt+sum;
		//printf("The total amount is %d\n",sum);
	}
	printf("The total amount is %d\n",sum);
	return 0;
}