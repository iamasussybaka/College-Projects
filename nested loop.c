#include <stdio.h>
int main()
{
/*To make an inverted triangle of (*) */
int n,i,j;
printf("Enter the length of Triangle u want to make : \n");
scanf("%d",&n);
printf("The Triangle has been Created : \n");
for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {
        printf("*");
    }
    printf("\n");
}
/*To make a Triangle of (*) */
printf("Enter the length of Triangle u want to make : \n");
scanf("%d",&n);
printf("The Triangle has been Created : \n");
for(i=0;i<n+1;i++)
{
    for(j=i;j>0;j--)
    {
        printf("*");
    }
    printf("\n");
}
/* To make a triangle of numbers */
printf("Enter the length of Triangle u want to make : \n");
scanf("%d",&n);
printf("The Triangle has been Created : \n");
for(i=0;i<n+1;i++)
{
    for(j=i;j>0;j--)
    {
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}