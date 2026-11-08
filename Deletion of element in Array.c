#include <stdio.h>
int main()
{
int A[20];
int n,i,x;
printf("Enter the number of elements : ");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("\nThe array is : ");
for (i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("\nEnter the location of element to be deleted : ");
scanf("%d",&x);
for (i=x;i<n;i++)
{
    A[i-1]=A[i];
}
printf("\nThe array after deletion is : \n");
for (i=0;i<n-1;i++)
{
    printf("%d\t",A[i]);
}
return 0;
}