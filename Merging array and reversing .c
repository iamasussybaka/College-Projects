#include<stdio.h>
int main()
{ int A[10],B[10],C[20],i,n,m,temp,k;
printf("Enter no. Elemets for Array A :");
scanf("%d",&n);
printf("\nEnter no. Elements for Array B :");
scanf("%d",&m);
printf("\nEnter the Values of elements for Array A : ");
for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("\nEnter the Values of elements for Array B : ");
for(i=0;i<m;i++)
{
    scanf("%d",&B[i]);
}
printf("\nArray A : ");
for(i=0;i<n;i++)
{
    printf("%d\t",A[i]);
}
printf("\nArray B : ");
for(i=0;i<m;i++)
{
    printf("%d\t",B[i]);
}
for(i=0;i<n;i++)
{
    C[i]=A[i];
}
for(i=n;i<n+m;i++)
{
    C[i]=B[i-n];
}
printf("\nArray C : ");
for(i=0;i<n+m;i++)
{
    printf("%d\t",C[i]);
}
printf("\nThe Reversed Array C is : ");
k=(n+m)/2;
for(i=0;i<k;i++)
{
    temp=C[i];
    C[i]=C[(n+m)-1-i];
    C[(n+m)-1-i]=temp;
}
for(i=0;i<n+m;i++)
{
    printf("%d\t",C[i]);
}
}