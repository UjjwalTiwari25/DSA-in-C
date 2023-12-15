#include <stdio.h>
#include<stdlib.h>
void Bubble(int A[],int n)
{
 int i,j,swap,flag=0;
 
 for(i=0;i<n-1;i++)
 {
 flag=0;
 for(j=0;j<n-i-1;j++)
 {
 if(A[j]>A[j+1])
 {
 swap=A[j];
 A[j]=A[j+1];
 A[j+1]=swap;
 flag=1;
 }
 }
 if(flag==0)
 break;
 }
 
}
int main()
{
 int A[10],n,i;
 printf("Enter the number of element\n");
 scanf("%d",&n);
 printf("Enter %d integers\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 
 Bubble(A,n);
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0;
}