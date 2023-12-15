#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    return fact(n-1)*n;
}
int C(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return 
    t1/(t2*t3);
}
int rec_c(int n,int r)
   {
    if(r==0||r==n)
    return 1;
    else
    return rec_c(n-1,r-1)+rec_c(n-1,r);
   }
int main()
{
    printf("%d\n",rec_c(5,2));
    return 0;
}