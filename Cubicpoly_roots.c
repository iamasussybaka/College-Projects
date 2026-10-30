#include <stdio.h>
#include <math.h>
int main()
{
int x,a,b,c,d,m,n;
printf("Enter the values of Coefficients for cubic polynomial: a,b,c,d");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Enter the Range to find roots in specified range: [m,n]");
scanf("%d%d",&m,&n);
for (x=m;x<n;x++)
{
    if((a*pow(x,3)+b*pow(x,2)+c*x+d)==0)
    {
       printf("\nThe Root of cubic polynomial is = %d",x);
    }

}
}