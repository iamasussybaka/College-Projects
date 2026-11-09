#include<stdio.h>
int main()
{
int A[5][5],B[5][5],C[5][5],m,n,i,j,k;
printf("Enter the no. of rows an columns for Matri A an B : (m,n)");
scanf("%d%d",&m,&n);
printf("\nEnter Matrix A values : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
printf("\nMatrix A : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",A[i][j]);
    }
    printf("\n");
}
printf("\nEnter Matrix B values : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&B[i][j]);
    }
}
printf("Matrix B : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",B[i][j]);
    }
    printf("\n");
}
if("m==n")
{
    printf("\nMultiplication of Matrix A and Matrix B is \n");

    for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {C[i][j]=0;
        for(k=0;k<m;k++)
        {
            (C[i][j]=C[i][j]+((A[i][k])*(B[k][j])));
        }
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",C[i][j]);
    }
    printf("\n");
}
}
else 
{
    printf("Multiplication is invalid as no of comluns in A is not equal to no. of rows in B");
}
return 0;
}