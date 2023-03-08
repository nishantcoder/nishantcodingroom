#include <stdio.h>
int main()
{
    float h=6.626E-34;
    float v,energy;
    printf("Enter the value for the frequency :\t");
    scanf("%E",&v);
    energy=h*v;
    printf("Energy of a photon is %E",energy);
}