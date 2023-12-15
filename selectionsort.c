#include <stdio.h>
#include<stdlib.h>

void SelectionSort(int A[],int n)
{
 int i,j,k,swap;
 
 for(i=0;i<n-1;i++)
 {
 for(j=k=i;j<n;j++)
 {
 if(A[j]<A[k])
 k=j;
 }
 swap=A[i];
 A[i]=A[k];
 A[k]=swap;
 }
}
int main()
{
 int A[100],n,i;
 printf("Enter the number of element\n");
 scanf("%d",&n);
 printf("Enter %d integers\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 
 SelectionSort(A,n);
 
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0;
}