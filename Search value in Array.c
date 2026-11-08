#include <stdio.h>
int main()
{
int A[20];
int n,i,x;
printf("Enter the no. of elements you want in Array : \n");
scanf("%d",&n);
printf("Enter the values of the elements : \n");
for (i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("The array is : \n");
for (i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("Enter the value you want to search for in Array : ");
scanf("%d",&x);
for (i=0;i<n;i++)
{
    if (A[i]==x)
    {
        printf("The value %d is found at index %d in the Array",x,i);
    }
}
return 0;
}