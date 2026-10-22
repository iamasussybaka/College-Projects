//To identify weather the year is a leap year or not
#include<stdio.h>
int main()
{ int n;
    printf("Enter any Year:");
    scanf("%d",&n);
    if (n%400==0)
     printf("The year %d is a leap year");
    else if(n%100==0)
     printf("The year %d is not a leap year");
    else if(n%4==0)
     printf("The year %d is a leap year");
    else
     printf("The year %d is not a leap year");
}