//code to print name and address in a text file TEST.txt
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("TEST.txt","w");
    fprintf(fp,"Nishant Raj \n");
    fprintf(fp,"Jamalpur,MUnger Bihar");
    fclose(fp);
    return 0;
}