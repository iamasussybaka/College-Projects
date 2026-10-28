#include <stdio.h>
#include <math.h>
int main()
{
int num,temp,sum,rem,n;
printf("enter a number to check if it is an Armstrong number or not: ");
scanf("%d",&num);
n=0;
sum=0;
temp=num;
while(temp!=0)
{
    temp=(temp/10);
    n++;
}
temp=num;
while(temp!=0)
{
    rem=(temp%10);
    sum= sum + pow(rem,n);
    temp=(temp/10);
}
if(sum==num)
{
    printf("The number %d is armstrong",num);
}
else
{
    printf("The sum is %d so,",sum);    
    printf("\nThe number %d is not an armstrong number",num);
}
}