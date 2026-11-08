#include <stdio.h>
int main()
{
int A[20];
int n,i,x,loc;
printf("Enter the no. of elements : ");
scanf("%d",&n);
printf("Enter the value of elements : ");
for (i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("The array is : \n");
for (i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("Enter the Value and index to insert element at : (Value , Index)");
scanf("%d%d",&x,&loc);
for (i=n-1;i>=loc-1;i--)
{
    A[i+1]=A[i];
}
A[loc]=x;
printf("The Array after insertion is : ");
for (i=0;i<n+1;i++)
{
    printf("%d\t",A[i]);
}
return 0;
}