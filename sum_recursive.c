#include<stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
}
int main(int n)
{
    int r;
     r=sum(10);
     printf("%d",r);
    return 0;
}
