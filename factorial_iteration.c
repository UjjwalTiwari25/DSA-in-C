#include<stdio.h>
int Iterativefact(int n)
{
int fact=1,i;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int main(int n)
{
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Factorial of %d=%d",n,Iterativefact(n));
    return 0;
}