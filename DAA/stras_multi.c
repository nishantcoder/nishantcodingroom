//Demonstration of strassen Multiplication
#include <stdio.h>

int main(){
    int A[2][2],B[2][2],C[2][2];
    printf("Enter the elements of matrix A\n"); //ye wla same chiz B ke v likho
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("Enter the elemnts of matrix B\n");
    
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Matrix A\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++){
            printf("%5d",A[i][j]);    //print krna h
            
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++){
            printf("%5d",B[i][j]);    //print krna h
            
        }
        printf("\n");
    }
    //yha pr kro delcare int type k

    int p,q,r,s,t,u,v;
    p=(A[0][0] + A[1][1])*(B[0][0] + B[1][1]); //tm q se n kregai p k bana diye h hm
    q=(A[1][0]+A[1][1])*B[0][0];
    r=A[0][0]*(B[0][1]-B[1][1]);
    s=A[1][1]*(B[1][0]-B[0][0]); //fault found 
    t=(A[0][0]+A[0][1])*B[1][1];
    u=(A[1][0]-A[0][0])*(B[0][0]+B[0][1]);
    v=(A[0][1]-A[1][1])*(B[1][0]+B[1][1]);

    //printf("%d %d %d %d %d %d %d ",p,q,r,s,t,u,v);

    C[0][0] = p+s-t+v; //oye p+s hoga
    C[1][0] = q+s;
    C[0][1] = r+t;
    C[1][1] = p+r-q+u;

    printf("Matrix C= A*B\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++){
            printf("%5d",C[i][j]);    //column 1 galat aa rha h
            
        }
        printf("\n");
    }
    
}  