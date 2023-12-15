#include <stdio.h>
#include<stdlib.h>
void InsertionSort(int A[],int n)
{
 int i,j,x;
 
 for(i=1;i<n;i++)
 {
    j=i-1;
    x=A[i];
    while(j>-1 && A[j]>x)
   {
    A[j+1]=A[j];
    j--;
   }
   A[j+1]=x;
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
 
 InsertionSort(A,n);    
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0;
}