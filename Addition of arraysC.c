#include <stdio.h>
int main() {
int A[5][5],B[5][5],C[5][5];
int i,j,r,c;
printf("Enter the number of rows and columns:");
scanf("%d%d",&r,&c);
printf("Enter the value of elements for A");
for (i=0;i<r;i++)
    {for (j=0;j<c;j++)
         {
            scanf("%d",&A[i][j]);
         }
    }
printf("Enter the values of elements for B");
for (i=0;i<r;i++)
    {for (j=0;j<c;j++)
         {
            scanf("%d",&B[i][j]);
         }
    }
for (i=0;i<r;i++)
    {for (j=0;j<c;j++)
         {
            C[i][j]=(A[i][j]+B[i][j]);
         }
    }
for (i=0;i<r;i++)
{
    for (j=0;j<c;j++)
     {
      printf("The Sum of matrices is:%d",C[i][j]);
     }
}

return 0;
}