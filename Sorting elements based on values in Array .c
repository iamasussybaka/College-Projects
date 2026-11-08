#include <stdio.h>
int main()
{
int A[20];
int n,i,j,temp;
printf("Enter the number of elements u want in Array : ");
scanf("%d",&n);
printf("Enter the values of elements : ");
for (i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("\nThe Array is : ");
for (i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("\nThe sorted Array is : ");
for (i=0;i<n-1;i++)
{
    for (j=0;j<n-i-1;j++)
    {
        if(A[j]>A[j+1])
        {
            temp=A[j+1];
            A[j+1]=A[j];
            A[j]=temp;
        }
    }
}
for (i=0;i<n;i++)
{
    printf("\n%d\t",A[i]);
}
return 0;
}