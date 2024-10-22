#include <stdio.h>
int M[4], Q[4], A[4], M2S[4], Q1 = 0, Q0 = 0,res[8];
void ARS()
{
    int temp = A[0];
    Q1 = Q[3];

    Q[3] = Q[2];
    Q[2] = Q[1];
    Q[1] = Q[0];
    Q[0] = A[3];

    A[3] = A[2];
    A[2] = A[1];
    A[1] = A[0];
    A[0] = temp;
}
void comp2s()
{
    for (int i = 0; i < 4; i++)
    {
        if (M[i] == 0)
        {
            M2S[i] = 1;
        }
        else
        {
            M2S[i] = 0;
        }
    }
    int carry = 1;

    for (int i = 3; i >= 0; i--)
    {
        int sum = M2S[i] + carry;
        if (sum == 2)
        {
            M2S[i] = 0;
            carry = 1;
        }
        else
        {
            M2S[i] = sum;
            carry = 0;
        }
    }
}

void add()
{
    int carry = 0;

    for (int i = 3; i >= 0; i--)
    {

        int sum = A[i] + M2S[i] + carry;

        if (sum == 0)
        {
            A[i] = 0;
            carry = 0;
        }
        else if (sum == 1)
        {
            A[i] = 1;
            carry = 0;
        }
        else if (sum == 2)
        {
            A[i] = 0; // 1 + 1 = 10 in binary, so place 0 and carry 1
            carry = 1;
        }
        else if (sum == 3)
        {
            A[i] = 1; // 1 + 1 + 1 = 11 in binary, so place 1 and carry 1
            carry = 1;
        }
    }
}

void binadd()
{
    int carry = 0;

    for (int i = 3; i >= 0; i--)
    {

        int sum = A[i] + M[i] + carry;

        if (sum == 0)
        {
            A[i] = 0;
            carry = 0;
        }
        else if (sum == 1)
        {
            A[i] = 1;
            carry = 0;
        }
        else if (sum == 2)
        {
            A[i] = 0; // 1 + 1 = 10 in binary, so place 0 and carry 1
            carry = 1;
        }
        else if (sum == 3)
        {
            A[i] = 1; // 1 + 1 + 1 = 11 in binary, so place 1 and carry 1
            carry = 1;
        }
    }
}

void bintodec(){
    int dec=0;
    if (res[0]==0)
    {
        dec=(128*res[1])+(64*res[1])+(32*res[2])+(16*res[3])+(8*res[4])+(4*res[5])+(2*res[6])+(1*res[7]);
    }
    else{
        dec=(-128*res[1])+(64*res[1])+(32*res[2])+(16*res[3])+(8*res[4])+(4*res[5])+(2*res[6])+(1*res[7]);
    }
    printf("\nDecimal Value is %d\n",dec);
}
int main()
{

    printf("Enter the 4 bit of Multiplicand\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &M[i]);
        A[i] = 0;
    }
    printf("Enter the 4 bit of Multiplicant\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &Q[i]);
    }
    printf("\n\nA\t\tQ\t\tQ(-1)\t\tM\t\tAction\n\n");
    printf("%d%d%d%d\t\t%d%d%d%d\t\t%d\t\t%d%d%d%d\t\tInititalization\n\n", A[0], A[1], A[2], A[3], Q[0], Q[1], Q[2], Q[3], Q1, M[0], M[1], M[2], M[3]);
    for (int i = 0; i < 4; i++)
    {
        Q0 = Q[3];
        if ((Q0 == 0 && Q1 == 0) || (Q0 == 1 && Q1 == 1))
        {
            ARS();
            printf("%d%d%d%d\t\t%d%d%d%d\t\t%d\t\t%d%d%d%d\t\tARS\n\n", A[0], A[1], A[2], A[3], Q[0], Q[1], Q[2], Q[3], Q1, M[0], M[1], M[2], M[3]);
        }
        if (Q0 == 0 && Q1 == 1)
        {
            binadd();
            printf("%d%d%d%d\t\t%d%d%d%d\t\t%d\t\t%d%d%d%d\t\tA <- A+M\n\n", A[0], A[1], A[2], A[3], Q[0], Q[1], Q[2], Q[3], Q1, M[0], M[1], M[2], M[3]);
            ARS();
            printf("%d%d%d%d\t\t%d%d%d%d\t\t%d\t\t%d%d%d%d\t\tARS\n\n", A[0], A[1], A[2], A[3], Q[0], Q[1], Q[2], Q[3], Q1, M[0], M[1], M[2], M[3]);
        }
        if (Q0 == 1 && Q1 == 0)
        {
            comp2s();
            add();
            printf("%d%d%d%d\t\t%d%d%d%d\t\t%d\t\t%d%d%d%d\t\tA <- A-M\n\n", A[0], A[1], A[2], A[3], Q[0], Q[1], Q[2], Q[3], Q1, M[0], M[1], M[2], M[3]);
            ARS();
            printf("%d%d%d%d\t\t%d%d%d%d\t\t%d\t\t%d%d%d%d\t\tARS\n\n", A[0], A[1], A[2], A[3], Q[0], Q[1], Q[2], Q[3], Q1, M[0], M[1], M[2], M[3]);
        }
    }
    printf("\nResult AQ \t");
    for (int i = 1; i <= 8; i++)
    {
        if (i>=1 && i<=4)
        {
            res[i-1]=A[i-1];
        }
        
        else{
            res[i-1]=Q[i-5];
        }
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d",res[i]);
    }
    bintodec();
 }

 