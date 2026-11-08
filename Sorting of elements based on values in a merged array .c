#include <stdio.h>
int main()
{
int A[10],B[10],C[20],i,j,n,m,temp;
printf("Enter The no. of elements u want in array A : ");
scanf("%d",&n);
printf("Enter the no. of elements u want in Array B : ");
scanf("%d",&m);
printf("Enter the value of elements for Array A : ");
for (i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("\nThe Array A is : \n");
for (i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("\nEnter the value of elements for Array B : ");
for (i=0;i<m;i++)
{
    scanf("%d",&B[i]);
}
printf("\nThe Array B is : \n");
for (i=0;i<m;i++)
{
    printf("%d\t",B[i]);
}
printf("\nThe Merged Array C is : \n");
for (i=0;i<n;i++)
{
    C[i]=A[i];
}
for (i=n;i<n+m;i++)
{
    C[i]=B[i-n];
}
for (i=0;i<n+m;i++)
{
    printf("%d\t",C[i]);
}
printf("\nThe Sorted C Array is : \n");
for (i=0;i<(n+m)-1;i++)
{
    for (j=0;j<(n+m)-i-1;j++)
    {
        if (C[j+1]<C[j])
        {
            temp=C[j+1];
            C[j+1]=C[j];
            C[j]=temp;
        }
    }
}
for (i=0;i<n+m;i++)
{
    printf("%d\t",C[i]);
}
return 0;
}