#include <stdio.h>
int main()
{
int A[20];
int n,i,x,v;
printf("Enter the number of elements you want in your Array : ");
scanf("%d",&n);
printf("Enter the values of elements : ");
for (i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("The Array is : \n");
for(i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("Enter the value and location to be updated : (v,x)");
scanf("%d%d",&v,&x);
A[x]=v;
printf("The updated Array is : \n");
for (i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
return 0;
}