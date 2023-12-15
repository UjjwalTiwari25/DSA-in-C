#include <stdio.h>
#include<conio.h>
void tower(int n,int A,int B,int  C)
{
 if(n>0)
 {
 tower(n-1,A,C,B);
 printf("(Move disk from tower %d to tower %d)\n",A,C);
 tower(n-1,B,A,C);
 }
}
int main()
{
    int x;
printf("Enter the number of disks : \n");
scanf("%d", &x);

 tower(x,1,2,3);
 return 0;
}