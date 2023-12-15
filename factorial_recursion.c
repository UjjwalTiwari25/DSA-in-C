#include<stdio.h>
#include<conio.h>
int fact(int n)
{
 if (n==0)
   return 1;
 else
   return fact(n-1)*n;
}
int main(int n)
{
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Factorial of %d=%d",n,fact(n));
    return 0;
}