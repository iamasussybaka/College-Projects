//To determine which of the 3 numbers is greatest
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter value of number 1:");
    scanf("%d",&num1);
    printf("enter value of number 2:");
    scanf("%d",&num2);
    printf("enter value of number 3:");
    scanf("%d",&num3);
    if(num1>num2)
     printf("number 1 is greatest");
    else if(num2>num3)
     printf("number 2 is greatest");
    else if(num1>num3)
     printf("number 1 is greatest");
    else
     printf("number 3 is greatest");
}