#include<stdio.h>
int main()
{
int A[5][5],B[5][5],i,j,m,n,temp;
printf("Enter the number of Rows and Columns for Mat A : (m,n)");
scanf("%d%d",&m,&n);
printf("\nEnter the value of elements for Mat A : ");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
printf("Matrix A is : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",A[i][j]);
    }
    printf("\n");
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        B[i][j]=A[i][j];
    }
}
printf("\nThe Transpose of matrix A is : \n");
for(i=0;i<m;i++)
{   
    for(j=0;j<n;j++)
    {
        A[j][i]=B[i][j];
    }
}

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d\t",A[i][j]);
    }
    printf("\n");
}
return 0;
}