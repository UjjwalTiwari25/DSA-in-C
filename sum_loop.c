#include<stdio.h>
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    s=s+i;
    return s;
}
int main(int n)
{
  int r;
     r=sum(10);
     printf("%d",r);
    return 0;
}