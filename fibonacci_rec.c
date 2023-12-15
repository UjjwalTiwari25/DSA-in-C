#include<stdio.h>
int rec_fib(int n)          //recursive method//
{
    if(n<=1)
    return n;
    return
     rec_fib(n-2) + rec_fib(n-1);
}
int fib(int n)             //itreative method//
 {
    int t1=0,t2=1,s=0,i;
    if (n<=1)
    return n;
    for(i=2;i<=n;i++)
     {
        s=t1+t2;
        t1=t2;
        t2=s;
     }return s;
 }
int main()
 {
    int i;
    printf("%d\n",fib(8));
    return 0;
 }