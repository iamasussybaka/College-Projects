#include <stdio.h>
int main()
{ 
int n,i,temp;
printf("Enter any number to check if its prime or not: ");
scanf("%d",&n);
for (i=2;i<n;i++)
{ if (n%i==0)
    { 
        temp=1;
    }
}
if (temp==1)
{ 
    printf("The number %d is Composite",n);
}
else 
{
    printf("The number %d is Prime",n);
}
return 0;
}