#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
    {printf("divisible by 2 and 3");}
    else
    {printf("not divisible by 2 and 3");}
   
}